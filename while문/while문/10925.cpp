#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
	int a, b;
	vector <int> v;
	cin >> a >> b;
	while (a != 0 && b != 0) {
		while (a < 0 || b < 0 || a>10 || b>10) {
			cout << "0<a,b<10 \n";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin >> a >> b;
		}
		v.push_back(a + b);
		cin >> a >> b;
	}
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
}