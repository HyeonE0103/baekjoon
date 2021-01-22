#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n;
	cin >> n;

	while (n < 1 || n>100) {
		cout << "nÀº 1<=n<=100" << '\n';
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << '\n';
	}
}