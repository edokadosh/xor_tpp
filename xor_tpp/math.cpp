#include <iostream>
#include "Complex.h"

using std::cout;
using std::endl;


int main() {
    const Complex num1(4, 5);
    Complex num2(1, 2);

    cout << num1 + num2 << endl;
    cout << num1 - num2 << endl;
    cout << num1 * num2 << endl;

    cout << (num1 == num2) << endl;

    Complex num{};
    cout << num << endl;
}