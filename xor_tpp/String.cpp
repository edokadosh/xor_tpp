#include "String.h"
#include <utility>

using std::exchange;
using std::ostream;

namespace string {

String::String(const char* str) : m_chars(new char[strlen(str) + 1]) {
    strcpy(m_chars, str);
}

String::~String() {
    delete[] m_chars;
}

String::String(const String& other) : m_chars(new char[strlen(other.m_chars) + 1]) {
    strcpy(m_chars, other.m_chars);
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

ostream& operator<<(ostream& os, const String& obj) {
    for (size_t i = 0; i < obj.length(); i++) {
        os << obj.m_chars[i];
    }
    return os;
}

} // namespace string
