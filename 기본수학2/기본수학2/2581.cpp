#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int m, n, add=0, min = INT_MAX;
	vector <int> v;
	cin >> m >> n;
	while (m > 10000 || n > 10000 || m > n) {
		cout << "0<m,n<=10000, m<=n \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> m >> n;
	}

	for (int i = m; i <= n; i++) {
		for (int j = 2; j <= i; j++) {
			if (i == j)
				v.push_back(i);
			else if(i % j == 0)
				break;
		}
	}
	if (v.size() == 0) {
		cout << "-1 \n";
	}
	else {
		for (auto i : v) {
			add = add + i;
			if (min > i)
				min = i;
		}
		cout << add << '\n' << min << '\n';
	}
}