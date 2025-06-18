#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;


namespace {

constexpr unsigned TABLE_PADDING = 4;
constexpr unsigned SIZE_OF_TABLE = 11;


// right pad a number with spaces
string rightPadIntWithSpaces(int num, int paddingLength) {
    return string((paddingLength - to_string(num).length()), ' ') + to_string(num);
}

// print multiplication chart
void printMultiplicationTable(unsigned size) {
    for (unsigned i = 1; i <= size; i++) {
        for (unsigned j = 1; j <= size; j++) {
            cout << rightPadIntWithSpaces(i * j, TABLE_PADDING);
        }
        cout << endl;
    }
}

} // namespace

int main() {
    printMultiplicationTable(SIZE_OF_TABLE);
    return 0;
}
