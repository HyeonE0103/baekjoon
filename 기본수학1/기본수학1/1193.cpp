/*
#include <iostream>
using namespace std;

int main() {
	int n, a = 1, k = 1;
	cin >> n;
	for (int i = 0; i < n-1; i++) {
		if (k % 2 != 0) {
			if (a == 1) {
				k++;
				a = 1;
			}
			else
				a--;
		}
		else {
			if (a == k) {
				k++;
				a = k;
			}
			else
				a++;
		}
	}
	cout << a << "/" << k + 1 - a << "\n";
}
//a�� 1, 1,2, 3,2,1, 1,2,3,4..  ������ ����Ǵ� Ȧ����°���� ��������, Ȧ����°�� ������������ ����
								������ 1->2->3->4�� ����Ǿ� �װ��� �̿�
*/