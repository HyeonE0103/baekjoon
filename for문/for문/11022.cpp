#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> v;
	vector <int> vn;

	for (int i = 1; i <= n; i++) {
		int a, b;
		cin >> a >> b;
		vn.push_back(a);
		vn.push_back(b);
		v.push_back(a + b);
	}
	for (int i = 0; i < n; i++) {
		cout << "Case #" << i + 1 << ": " << vn[2 * i] << " + " << vn[2 * i + 1] << " = " << v[i]<<'\n';
	}
}