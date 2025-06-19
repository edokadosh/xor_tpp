#pragma once
#include <string>
#include <utility>

using std::pair;
using std::string;

namespace hash_table {

constexpr size_t DEFAULT_HASH_TABLE_SIZE = 100;
const char* NOT_FOUND = "";

template <typename V> class HashTable {
  public:
    HashTable(size_t tableSize = DEFAULT_HASH_TABLE_SIZE);

    virtual ~HashTable();
    HashTable(const HashTable& other);
    HashTable(HashTable&& other) noexcept;
    HashTable& operator=(const HashTable& other);
    HashTable& operator=(HashTable&& other) noexcept;

    V& operator[](const string& key);
    V operator[](const string& key) const;

    void remove(const string& key);
    size_t size() const;
    string find(const V& value) const;
    bool hasKey(const string& key) const;

  private:
    pair<string, V>** m_items;
    size_t m_tableSize;
};

} // namespace hash_table