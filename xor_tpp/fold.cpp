#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

constexpr unsigned TABLE_PADDING = 4;

namespace {

using std::string;
using std::to_string;

// right pad a number with spaces
string padInt(int num, int paddingLength) {
    return string((paddingLength - to_string(num).length()), ' ') + to_string(num);
}

// print multiplication chart
void printMult() {
    for (int i = 1; i <= 11; i++) {
        for (int j = 1; j <= 11; j++) {
            cout << padInt(i * j, TABLE_PADDING);
        }
        cout << endl;
    }
}

} // namespace

int main() {
    printMult();
    return 0;
}
