#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::sqrt;

int main() {
    double number = 0;

    cout << "Enter number: ";
    cin >> number;
    if (cin.fail()) {
        cout << "Expected double" << endl;
        return 1;
    }
    if (number < 0) {
        cout << "Expected positive value" << endl;
        return 1;
    }
    cout << "The square root is: " << sqrt(number) << endl;

    return 0;
}
