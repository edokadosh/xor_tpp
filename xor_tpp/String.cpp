#include "String.h"


String::String(const char *str) {
    m_length = strlen(str);
    m_chars = std::make_unique<char[]>(m_length + 1);
    size_t index = 0;
    do {
        m_chars[index] = str[index];
    } while (str[index++]);
}


std::ostream &operator<<(std::ostream &os, const String &obj) {
    for (int i = 0; i < obj.m_length; i++) {
        os << obj.m_chars[i];
    }
    return os;
}
