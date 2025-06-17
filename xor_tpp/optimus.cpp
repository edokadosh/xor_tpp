#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

namespace {
// Check if unsigned value is prime
bool isPrime(unsigned num) {
    for (unsigned i = 2; i * i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

} // namespace

int main() {
    std::vector<unsigned> numbersToCheck = {5, 23, 237, 7};

    for (auto num : numbersToCheck) {
        cout << num << " is " << (isPrime(num) ? "" : "not ") << "prime" << endl;
    }

    return 0;
}
