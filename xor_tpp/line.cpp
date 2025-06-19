#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void printVec(vector<int> vec) {
	cout << "[";
	for (auto i : vec) {
		cout << i << ", ";
	}
	cout << "]" << endl;
}

int main() {
	vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13, 17 };

	printVec(vec);
	cout << "2. " << count(vec.begin(), vec.end(), 4) << endl;

	cout << "3. " << count_if(vec.begin(), vec.end(), [](const int& a) {return a > 4; }) << endl;

	vec.erase(remove_if(vec.begin(), vec.end(), [](const int& a) {return a < 8; }), vec.end());
	cout << "4. ";
	printVec(vec);

	cout << "5. ";
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	vector<int> diff(vec.size() - 1);
	transform(vec.begin(), --vec.end(), ++vec.begin(), diff.begin(), [](int a, int b) {return b - a; });
	cout << "8. ";
	copy(diff.begin(), diff.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	cout << "10. " << accumulate(diff.begin(), diff.end(), 0) << endl;


	return 0;
}