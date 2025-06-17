#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

namespace {
// Check if unsigned value is prime
bool isPrime(const unsigned &num) {
    for (unsigned i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

} // namespace

int main() {
    vector<unsigned> numbersToCheck = {4, 5, 23, 237, 7};

    for (const auto &num : numbersToCheck) {
        cout << num << " is " << (isPrime(num) ? "" : "not ") << "prime" << endl;
    }

    return 0;
}
