#include "String.h"
#include <utility>

using std::exchange;
using std::ostream;
using std::cerr;
using std::endl;

namespace string {

String::String(const char* str) : m_chars(new char[strlen(str) + 1]) {
    size_t i = 0;
    do {
        m_chars[i] = str[i];
    } while (str[i++]);
}

String::~String() {
    delete[] m_chars;
}

String::String(const String& other) : m_chars(new char[strlen(other.m_chars) + 1]) {
    size_t i = 0;
    do {
        m_chars[i] = other.m_chars[i];
    } while (other.m_chars[i++]);
}

String::String(String&& other) noexcept : m_chars(exchange(other.m_chars, nullptr)) {
    // Left blank intentionally
}

String& String::operator=(const String& other) {
    return *this = String(other);
}

String& String::operator=(String&& other) noexcept {
    std::swap(m_chars, other.m_chars);
    return *this;
}


size_t String::length() const {
    return strlen(m_chars);
}

void String::clear() {
    delete[] m_chars;
    m_chars = new char{'\0'};
}

char& String::operator[](size_t idx) {
    return m_chars[idx];

}
char String::operator[](size_t idx) const {
    return m_chars[idx];
}
const char* String::c_str() const {
    return m_chars;
}

ostream& operator<<(ostream& os, const String& obj) {
    for (size_t i = 0; i < obj.length(); i++) {
        os << obj.m_chars[i];
    }
    return os;
}

} // namespace string
