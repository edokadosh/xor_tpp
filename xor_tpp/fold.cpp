#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;

#define TABLE_PADDING 4

// pad integert 
string padInt(int num, int paddingLength) {
    return string((paddingLength - to_string(num).length()), ' ');
}

// print multiplication chart
void printMult() {
    for (int i = 1; i <= 11; i++)
    {
        for (int j = 1; j <= 11; j++)
        {
            cout << i * j << padInt(i * j, TABLE_PADDING);
        }
        cout << endl;
    }
}

int main() {
    printMult();

    return 0;
}
