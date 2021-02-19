/*
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	vector <int> num;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		int okay = 0;
		cin >> n;
		while (n < 4 || n>10000 || n % 2 != 0) {
			cout << "4<=n<=10000, n�� ¦�� \n";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin >> n;
		}
		vector <bool> v(n + 1, true);
		v[0] = false; v[1] = false;

		for (int i = 2; i <= n; i++) {
			for (int j = 2 * i; j <= n; j += i) {
				v[j] = false;
			}
		}
		for (int i = n / 2; i >= 2; i--) {	//�� �Ҽ��� ���̰� ���� ���� ���� ���
			if (v[i] == true && v[n - i] == true) {	//�߰����� �������� �� �Ҽ��� ���̰� �۾���
				num.push_back(i);
				num.push_back(n - i);
				break;
			}
		}
		v.clear();
	}
	for (int i = 0; i < t * 2; i = i + 2) {
		cout << num[i] << " " << num[i + 1] << '\n';
	}
}
*/