#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    for (int i = 1; i <= 11; i++) {
        for (int j = 1; j <= 11; j++) {
        cout << i * j << std::string((4 - std::to_string(i * j).length()), ' ');
        }
        cout << endl;
    }

    return 0;
}