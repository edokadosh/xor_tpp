#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number;

    cout << "Enter number: ";
    cin >> number;
    cout << "The square root is: " << std::sqrt(number) << endl;

    return 0;
}