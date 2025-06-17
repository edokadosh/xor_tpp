#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::sqrt;

int main() {
    int number = 0;

    cout << "Enter number: ";
    cin >> number;
    if (cin.fail())
    {
        cout << "Expected integer" << endl;
        return 0;
    }
    cout << "The square root is: " << sqrt(number) << endl;

    return 0;
}
