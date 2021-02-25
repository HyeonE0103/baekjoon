/*
#include <iostream>
#include <climits>
using namespace std;

int num(int n) {
	int num = n;
	while (n > 0) {
		num += (n % 10);
		n /= 10;
	}
	return num;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	while (n < 1 || n>1000000) {
		cout << "1<=n<=1000000 \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}
	
	for (int i = 0; i < n; i++) {
		if (num(i) == n) {
			cout << i << '\n';
			return 0;
		}
	}

	cout << 0;
	return 0;
}
*/