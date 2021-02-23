#include <iostream>
#include <climits>
using namespace std;

int fibonacci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1 || n == 2)
		return 1;
	else
		return n = fibonacci(n - 2) + fibonacci(n - 1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	while (n < 0 || n>20) {
		cout << "0<=n<=20 \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}
	cout << fibonacci(n);
}