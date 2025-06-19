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

string func1(string s, char key) { //xor
	string res = s;
	std::transform(res.begin(), res.end(), res.begin(), [key](char c) { return static_cast<char>(c ^ key); });
	return res;
}

string func2(string s) { //flip
	string res = s;
	std::reverse(res.begin(), res.end());
	return res;
}

bool func3(vector<string> names) { //names
	return std::all_of(names.begin(), names.end(), [](string n) {return std::all_of(n.begin(), n.end(), [](char c) {return isupper(c); }); });
}

vector<int> flatten(vector<vector<int>> v) {
	vector<int> res;
	// I gave up on accumulate because i didnt find a way to concat 2 vectors and return the concat vector in 1 line
	for_each(v.begin(), v.end(), [&](const std::vector<int>& a) {res.insert(res.end(), a.begin(), a.end()); });
	return res;
}

int main() {
	string s = "hello world";
	vector<string> names1 = {"HI", "HELLO", "WORLD"};
	vector<string> names2 = { "HI", "HeLLO", "WORLD" };

	vector<vector<int>> vec = {{ 1, 2, 3}, { 4, 5, 6} };

	cout << func1(s, '\1') << endl;
	cout << func2(s) << endl;
	
	cout << func3(names1) << endl;
	cout << func3(names2) << endl;

	printVec(flatten(vec));
	
	return 0;
}