#pragma once
#include <iostream>

class String {
  public:
    String(const char *str);

    friend std::ostream &operator<<(std::ostream &os, const String &obj);

  private:
    std::unique_ptr<char[]> m_chars = nullptr;
    size_t m_length;
};
