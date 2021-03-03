/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	vector <int> v;
	cin >> n;
	while (n < 1 || n>1000) {
		cout << "1<=n<=1000 \n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		int num; 
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(),v.end());

	for (auto i : v)
		cout << i << '\n';
}
*/