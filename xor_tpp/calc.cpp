#include <iostream>
#include "Calculator.h"

using std::cout;
using std::endl;
using std::cerr;

namespace {
void printErr(const char * what) {
    cerr << "Exception: " << what << endl;
}
}

int main() {
    Calculator mycalc;

	cout << mycalc.add(5, 6) << endl;
    cout << mycalc.substract(10, 6) << endl;
    cout << mycalc.multiply(3, 6) << endl;
    cout << mycalc.divide(10, 6) << endl;

    try {
        mycalc.divide(10, 0);
    } catch (const std::exception &e) {
        printErr(e.what());
    }

    cout << mycalc.calculate(10, '+', 6) << endl;
    cout << mycalc.calculate(10, '-', 6) << endl;
    
    try {
        mycalc.calculate(10, 'a', 6);
    } catch (const std::exception &e) {
        printErr(e.what());
    }

	return 0;
}