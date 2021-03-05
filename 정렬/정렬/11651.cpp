#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool com(pair<int, int> a, pair<int, int> b) {
	if (a.second != b.second)
		return a.second < b.second;
	else
		return a.first < b.first;
}

int main() {
	int n,a,b;
	vector <pair<int, int>> v;
	cin >> n;
	while (n < 1 || n>100000) {
		cout << "1<=n<=100000 \n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		while (n < 1 || n>100000) {
			cout << "1<=n<=100000 \n";
			cin.clear();
			cin.ignore(999, '\n');
			cin >> n;
		}
		v.push_back({ a,b });
	}
	sort(v.begin(), v.end(),com);

	for (int i = 0; i < n; i++)
		cout << v[i].first << " " << v[i].second << '\n';
}