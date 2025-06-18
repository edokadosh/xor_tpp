#pragma once
#include <iostream>

using std::make_unique;
using std::ostream;

class String {
  public:
    explicit String(const char *str);
    size_t length() const;

    friend ostream &operator<<(ostream &os, const String &obj);

  private:
    std::unique_ptr<char[]> m_chars;
};
