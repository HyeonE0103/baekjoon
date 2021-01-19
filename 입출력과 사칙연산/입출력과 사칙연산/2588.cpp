#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a >> b;
	c = b % 10;
	d = (b % 100) - c;
	e = (b - d) - c;
	
	cout << e << endl;
	cout << a * c << endl;
	cout << (a * d) / 10 << endl;
	cout << (a * e) / 100 << endl;
	cout << a * b << endl;
}