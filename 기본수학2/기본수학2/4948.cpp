/*
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n;
	vector <int> pr_num;
	while (true) {
		int num=0;
		cin >> n;
		if (n == 0)
			break;
		while (n < 1 || n>123456) {
			cout << "1<=n<=123456 \n";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin >> n;
		}
		vector <bool> v((2*n) + 1, true);
		v[0] = false; v[1] = false;

		for (int i = 2; i <= 2 * n; i++) {
			if (v[i]) {
				for (int j = 2 * i; j <= 2 * n; j += i)
					v[j] = false;
			}
		}
		for (int i = n+1; i <= n * 2; i++) {	//조건 조심 n보다 크고 2n보다 작거나 같은 소수
			if (v[i])
				num++;
		}
		pr_num.push_back(num);
		v.clear();
	}
	for (auto i : pr_num)
		cout << i << '\n';
}
*/