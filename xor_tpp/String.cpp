#include "String.h"

using std::make_unique;
using std::ostream;

namespace string {

String::String(const char* str) {
    std::cout << strlen(str) + 1 << std::endl;
    m_chars = new char[strlen(str)+1];
    size_t index = 0;
    do {
        m_chars[index] = str[index];
        std::cout << index << std::endl;
    } while (str[index++]);
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
