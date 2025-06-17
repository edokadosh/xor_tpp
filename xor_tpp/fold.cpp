#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;


namespace {

constexpr unsigned TABLE_PADDING = 4;

// right pad a number with spaces
string rightPadIntWithSpaces(int num, int paddingLength) {
    return string((paddingLength - to_string(num).length()), ' ') + to_string(num);
}

// print multiplication chart
void printMultiplicationTable() {
    for (int i = 1; i <= 11; i++) {
        for (int j = 1; j <= 11; j++) {
            cout << rightPadIntWithSpaces(i * j, TABLE_PADDING);
        }
        cout << endl;
    }
}

} // namespace

int main() {
    printMultiplicationTable();
    return 0;
}
