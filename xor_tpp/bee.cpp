#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

constexpr unsigned NUMBER_OF_PRIMES_TO_FIND = 10;

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

void findNumberOfFirstPrimes(vector<unsigned> &resultPrimes, unsigned numberOfPrimesToFind) {
    unsigned currentNumber = 2;

    while (resultPrimes.size() < numberOfPrimesToFind) {
        if (isPrime(currentNumber)) {
            resultPrimes.push_back(currentNumber);
        }
        currentNumber++;
    }
}

void printVector(const vector<unsigned> &vec) {
    for (auto i : vec) {
        cout << i << endl;
    }
}

} // namespace



int main() {
    vector<unsigned> result = {};
    result.reserve(NUMBER_OF_PRIMES_TO_FIND);

    findNumberOfFirstPrimes(result, NUMBER_OF_PRIMES_TO_FIND);

    cout << "Got primes:" << endl;
    printVector(result);

    return 0;
}
