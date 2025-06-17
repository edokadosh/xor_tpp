#pragma once
#include <iostream>


class String {
  private:
    std::unique_ptr<char[]> chars = nullptr;

  public:
    String(const char* str);


};
