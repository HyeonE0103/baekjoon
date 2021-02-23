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
			i = 1;	//�������� ���� i++�� �Ǹ� i=3�� �Ǿ� 3���� �˻�� �׷��� i=1���Ͽ� 2���� �˻�ǰ�
		}
	}

	for (auto i : v)
		cout << i << '\n';
}