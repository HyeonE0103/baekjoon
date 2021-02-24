#include <iostream>
#include <climits>
using namespace std;

int factorial(int n) {
	if (n == 0)
		return 1;
	else return n = n * factorial(n - 1);
}

int main() {
	int n;
	cin >> n;
	while (n < 0 || n>12) {
		cout << "0<=n<=12 \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}
	cout << factorial(n) << endl;
}