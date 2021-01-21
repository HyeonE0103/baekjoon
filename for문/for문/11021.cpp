#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> v;
	for (int i = 1; i <= n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(a + b);
	}
	for (int i = 1; i <= v.size(); i++)
		cout << "Case #" << i << ": " << v[i-1] << '\n';
}