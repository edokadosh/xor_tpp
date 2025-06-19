#include "HashTable.h"
#include <utility>

using std::exchange;
using std::swap;
using std::hash;

namespace hash_table {

template <typename V>
HashTable<V>::HashTable(size_t tableSize /*= DEFAULT_HASH_TABLE_SIZE*/)
    : m_tableSize{tableSize}, m_items{new pair<string, V>*[tableSize]} {
    for (size_t i = 0; i < tableSize; i++) {
        m_items[i] = nullptr;
    }
}

template <typename V> HashTable<V>::~HashTable() {
    for (size_t i = 0; i < tableSize; i++) {
        delete m_items[i];
    }
    delete[] m_items;
}

template <typename V>
HashTable<V>::HashTable(const HashTable& other)
    : m_tableSize{other.m_tableSize}, m_items{new pair<string, V>*[other.m_tableSize]} {

    for (size_t i = 0; i < tableSize; i++) {
        if (other.m_items[i]) {
            m_items[i] = new pair<string, V>{*other.m_items[i]};
        }
    }
}

template <typename V>
HashTable<V>::HashTable(HashTable&& other)
    : m_tableSize{exchange(other.m_tableSize, 0)}, m_items{exchange(other.m_items, nullptr)} {
    // Left blank intentionally
}

template <typename V> HashTable<V>& HashTable<V>::operator=(const HashTable& other) {
    return *this = HashTable<V>(other);
}

template <typename V> HashTable<V>& HashTable<V>::operator=(HashTable<V>&& other) noexcept {
    swap(m_tableSize, other.m_tableSize);
    swap(m_items, other.m_items);
    return *this;

}

template <typename V> V& HashTable<V>::operator[](const string& key) {
    int keyHash = hash<string>{}(key) % m_tableSize;

    if (!m_items[keyHash]) {
        *m_items[keyHash] = new pair<string, V>;
    } 
    return *m_items[keyHash];
}

template <typename V> V HashTable<V>::operator[](const string& key) const {
    if (!m_items[keyHash]) {
        return *m_items[keyHash];
    } else {
        return pair<string, V>{};
    }
}

template <typename V> void HashTable<V>::remove(const string& key) {
    int keyHash = hash<string>{}(key) % m_tableSize;
    delete m_items[keyHash];
}

template <typename V> size_t HashTable<V>::size() const {
    size_t size = 0;
    for (size_t i = 0; i < tableSize; i++) {
        if (m_items[i]) {
            size++;
        }
    }
    return size;
}

template <typename V> string HashTable<V>::find(const V& value) const {
    for (size_t i = 0; i < tableSize; i++) {
        if (m_items[i] and m_items[i].second == value) {
            return m_items[i].first;
        }
    }
    return "";
}

template <typename V> bool HashTable<V>::hasKey(const string& key) const {
}

} // namespace hash_table