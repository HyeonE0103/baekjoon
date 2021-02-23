#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	vector<int> v;
	cin >> n;

	while (n < 1 || n>10000000) {
		cout << "1<=n<=10000000 \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}

	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			n = n / i;
			v.push_back(i);
			i = 1;	//다음으로 갈때 i++이 되면 i=3이 되어 3부터 검사됨 그래서 i=1로하여 2부터 검사되게
		}
	}

	for (auto i : v)
		cout << i << '\n';
}