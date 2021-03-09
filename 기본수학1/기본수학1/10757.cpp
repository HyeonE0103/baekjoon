#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n = 0;
	string n1, n2;
	vector<int>a, b, c;
	cin >> n1 >> n2;
	if (n1.size() >= b.size()) {
		for (int i = n1.size() - 1; i >= 0; i--)	//문자열이기 때문에 마지막은 '\0'
			a.push_back(n1[i] - '0');
		for (int i = n2.size() - 1; i >= 0; i--)
			b.push_back(n2[i] - '0');
	}
	else {
		for (int i = n1.size() - 1; i >= 0; i--)
			b.push_back(n1[i] - '0');
		for (int i = n2.size() - 1; i >= 0; i--)
			a.push_back(n2[i] - '0');
	}
	for (int i = 0; i < b.size(); i++) {
		if (a[i] + b[i] + n < 10) {
			c.push_back(a[i] + b[i] + n);
			n = 0;
		}
		else {
			c.push_back(a[i] + b[i] + n - 10);
			n = 1;
		}
	}
	if (a.size() != b.size()) {
		for (int i = b.size(); i < a.size(); i++) {
			if (a[i] + n < 10) {
				c.push_back(a[i] + n);
				n = 0;
			}
			else {
				c.push_back(a[i] + n - 10);
				n = 1;
			}
		}
	}
	if (n == 1)	
		c.push_back(1);
	for (int i = c.size() - 1; i >= 0; i--)
		cout << c[i];
}