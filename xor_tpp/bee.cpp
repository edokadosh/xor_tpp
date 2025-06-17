#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

namespace {
// Check if unsigned value is prime
bool isPrime(unsigned num) {
    for (unsigned i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void findNumberOfFirstPrimes(std::vector<unsigned> &resultPrimes, unsigned numebrOfPrimesToFind) {
    unsigned currentNumber = 2;

    while (resultPrimes.size() < numebrOfPrimesToFind) {
        if (isPrime(currentNumber)) {
            resultPrimes.push_back(currentNumber);
        }
        currentNumber++;
    }
}

} // namespace

int main() {
    std::vector<unsigned> result = {};

    findNumberOfFirstPrimes(result, 10);

    cout << "Got primes:" << endl;
    for (auto p : result) {
        cout << p << endl;
    }

    return 0;
}
