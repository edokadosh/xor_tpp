#include <iostream>

using std::cin;
using std::cout;
using std::endl;

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

void findNumberOfFirstPrimes(std::unique_ptr<unsigned[]> &result, unsigned numberOfPrimesToFind) {
    unsigned currentNumber = 2;
    unsigned index = 0;

    while (index < numberOfPrimesToFind) {
        if (isPrime(currentNumber)) {
            result[index] = currentNumber;
            index++;
        }
        currentNumber++;
    }
}

void printArray(std::unique_ptr<unsigned[]>  &arr, unsigned length) {
    for (unsigned i = 0; i < length; i++) {
        cout << arr[i] << endl;       
    }
}

} // namespace



int main() {
    std::unique_ptr<unsigned[]> result(new unsigned[NUMBER_OF_PRIMES_TO_FIND]);

    findNumberOfFirstPrimes(result, NUMBER_OF_PRIMES_TO_FIND);

    cout << "Got primes:" << endl;
    printArray(result, NUMBER_OF_PRIMES_TO_FIND);

    return 0;
}
