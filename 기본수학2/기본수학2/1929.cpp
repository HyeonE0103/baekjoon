#include<iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int m, n;
	cin >> m >> n;
	while (1 > m || 1 > n || m > n || m > 1000000 || n > 1000000) {
		cout << "1<=m<=n<=1000000 \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> m >> n;
	}
	vector <bool> v(n + 1, true);	//n+1�ؾ� 0���� n������ ����
	v[0] = false;	//0���Ҽ� �ƴ�
	v[1] = false;	//1�� �Ҽ� �ƴ�
	for (int i = 2; i <= n; i++) {
		if (v[i]) {	//false�� �Ҽ��� �ƴѰŴϱ� true�� Ȯ���ϸ� ��
			for (int j = 2 * i; j <= n; j += i)	//�Ҽ��� n������� ��� �Ҽ��� �ƴ�
				v[j] = false;
		}
	}
	for (int i = m; i <= n; i++) {
		if (v[i])	//�Ҽ����
			cout << i << '\n';
	}
	/*
	for (int i = m; i <= n; i++) {	//�ð��ʰ�... �翬��... �����佺�׳׽��� ü�� �̿�
		for (int j = 2; j <= i; j++) {
			if (i == j)
				cout << i << '\n';
			else if (i % j == 0)
				break;
		}
	}
	*/
}