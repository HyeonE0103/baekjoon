#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n, num=0;
	cin >> n;
	while (n < 3 || n>5000) {
		cout << "3<=n<=5000 \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}
	while (n > 0) {
		if (n == 6 || n == 3 || n==9 || n==12) {	//���� �ּҰ���� 15������ 3�� �����
			num = num + (n / 3);
			n = 0;
		}
		else {
			n = n - 5;
			num++;
		}
		if (n < 0)	//��Ȯ�� nų�α׷��� ���� �� ���� ���
			num = -1;
	}
	cout << num << '\n';
}