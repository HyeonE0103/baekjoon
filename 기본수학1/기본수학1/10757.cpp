#include <iostream>
#include <vector>
using namespace std;

int main() {
	string  a, b, c = "", d = "";
	int num=0;
	vector <int> v;
	cin >> a >> b;
	if (a.size() >= b.size()) {
		for (int i = a.size(); i > 0; i--)
			c = c + a[i];
		for (int i = b.size(); i > 0; i--)
			d = d + b[i];
	}
	else {
		for (int i = a.size(); i > 0; i--)
			d = d + a[i];
		for (int i = b.size(); i > 0; i--)
			c = c + b[i];
	}
	if (c.size() > d.size()) {
		for (int i = 0; i < d.size(); i++) {
			if (int(c[i]) + int(d[i] >= 10)) {
				v.push_back(int(c[i]) + int(d[i]) - 10 + num);
				num = 1;
			}
			else {
				v.push_back(int(c[i]) + int(d[i]) + num);
				num = 0;
			}
		}
		for (int i = c.size() - d.size(); i < c.size(); i++) {
			if (int(c[i] + num) >= 10) {
				v.push_back(int(c[i]) + num -10);
				num = 1;
			}
			else {
				v.push_back(int(c[i]) + num);
				num = 0;
			}
		}
		if (num == 1)
			v.push_back(1);
	}
	if (c.size() == d.size()) {
		for (int i = 0; i < d.size(); i++) {
			if (int(c[i]) + int(d[i] >= 10)) {
				v.push_back(int(c[i]) + int(d[i]) - 10 + num);
				num = 1;
			}
			else {
				v.push_back(int(c[i]) + int(d[i]) + num);
				num = 0;
			}
		}
		if (num == 1)
			v.push_back(1);
	}
	
	for (int i = v.size(); i > 0; i--)
		cout << v[i];
}