#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, a = "", b = "";
	getline(cin, s);
	for (int i = 0; i < 3; i++) {
		a = a + s[2 - i];
		b = b + s[6 - i];
	}

	for (int i = 0; i < 3; i++) {
		if (a[i] > b[i]) {
			for (int j = 0; j < 3; j++)
				cout << a[j];
			break;
		}
		else if(a[i]<b[i]) {
			for (int j = 0; j < 3; j++)
				cout << b[j];
			break;
		}
	}
}