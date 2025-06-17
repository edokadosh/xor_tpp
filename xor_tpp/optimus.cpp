#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

bool isPrime(int num) {
    for (int i = 2; i * i < num; i++) 
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> numbersToCheck = {5, 23, 237, 7};

    for (auto num : numbersToCheck)
    {
        cout << num << " is " << (isPrime(num) ? " " : " not ") << "prime" << endl;
    }

    return 0;
}
