#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n, an, i = 1;
	cin >> n;

	while (n < 0 || n>99) {
		cout << "0<=n<=99\n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}

	an = ((n % 10) * 10) + (((n / 10) + (n % 10)) % 10);

	while (n != an) {
		an = ((an % 10) * 10) + (((an / 10) + (an % 10)) % 10);
		i++;
	}
	cout << i << '\n';
}