#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;

int main()
{

    for (int i = 1; i <= 11; i++)
    {
        for (int j = 1; j <= 11; j++)
        {
            cout << i * j << string((4 - to_string(i * j).length()), ' ');
        }
        cout << endl;
    }

    return 0;
}
