#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class isPrime
{
public:
	isPrime() {}

	bool operator () (unsigned num) const {
		if (num == 0 or num == 1) {
			return false;
		}
		for (unsigned i = 2; i * i <= num; i++) {
			if (num % i == 0) {
				return false;
			}
		}
		return true;
	}
};


class larger
{
public:
	larger() {}

	bool operator () (pair<int, int> p) const {
		return p.first > p.second;
	}
};


class divisible
{
public:
	divisible(unsigned num) : m_num(num) {}

	bool operator () (unsigned num) const {
		return num % m_num == 0;
	}
private:
	unsigned m_num;
};

class xor_x
{
public:
	xor_x(int num) : m_num(num) {}

	int operator () (int num) const {
		return num ^ m_num;
	}
private:
	int m_num;
};




int main() {

	cout << isPrime()(13) << endl;

	cout << larger()(make_pair<int, int>(6, 5)) << endl;

	cout << divisible(4)(8) << endl;

	cout << xor_x(4)(12) << endl;

}