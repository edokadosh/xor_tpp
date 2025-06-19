#include "String.h"
#include <iostream>

using std::cout;
using std::endl;
using string::String;

int main() {
    String myStr{"hello"};

    cout << myStr << endl;

    cout << myStr[2] << endl;
    myStr[1] = 'b';
    cout << myStr << endl;
    cout << myStr.c_str() << endl;
    myStr.clear();
    cout << myStr << endl;
}