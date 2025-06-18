#pragma once
#include <iostream>
#include <memory>

namespace string {

class String {
  public:
    explicit String(const char* str);
    size_t length() const;

    friend std::ostream& operator<<(std::ostream& os, const String& obj);

  private:
    char* m_chars;
};

} // namespace string
