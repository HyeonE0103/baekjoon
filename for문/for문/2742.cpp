/*
#include <iostream>
#include <climits>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	while (n < 1 || n>100000) {
		cout << "nÀº 1<=n<=10000" << '\n';
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}

	for (int i = n; i > 0; i--)
		cout << i << '\n';
}
*/