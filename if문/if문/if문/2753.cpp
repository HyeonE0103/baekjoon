#include <iostream>
using namespace std;

int main() {
	int a,b,c,d;
	cin >> a;
	if ((a % 4) == 0 && (a % 100) != 0)
		cout << "1" << endl;
	else if ((a % 400) == 0)
		cout << "1" << endl;
	else
		cout << "0" << endl;
}