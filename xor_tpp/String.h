#pragma once
#include <iostream>

namespace string {

class String {
  public:
    explicit String(const char* str);
    ~String();

    size_t length() const;

    friend std::ostream& operator<<(std::ostream& os, const String& obj);

  private:
    char* m_chars;
};

} // namespace string
