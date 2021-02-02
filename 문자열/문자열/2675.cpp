/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <char> v;
	for (int i = 0; i < n; i++) {
		int nu;
		string s;
		cin >> nu >> s;
		for (int j = 0; j < s.size(); j++) {
			for (int k = 0; k < nu; k++)
				v.push_back(s[j]);
		}
		v.push_back('\n');
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
	}
}
*/