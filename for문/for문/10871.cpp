#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	vector <int> v;
	while (n < 1 || x>10000) {
		cout << "1<=n, x<=10000 \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n >> x;
	}
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	for (int i = 0; i < n; i++) {
		if (v[i] < x)
			cout << v[i]<<" ";
	}

}