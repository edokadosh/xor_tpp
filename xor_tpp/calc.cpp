#include "Calculator.h"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;


int main() {
    calculator::Calculator mycalc;

    cout << mycalc.add(5, 6) << endl;
    cout << mycalc.substract(10, 6) << endl;
    cout << mycalc.multiply(3, 6) << endl;
    cout << mycalc.divide(10, 6) << endl;

    try {
        mycalc.divide(10, 0);
    } catch (const calculator::CalculatorException &e) {
        calculator::printErr(e.what());
    }

    cout << mycalc.calculate(10, '+', 6) << endl;
    cout << mycalc.calculate(10, '-', 6) << endl;

    try {
        mycalc.calculate(10, 'a', 6);
    } catch (const calculator::CalculatorException &e) {
        calculator::printErr(e.what());
    }

    return 0;
}