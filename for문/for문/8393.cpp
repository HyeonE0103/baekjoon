/*
#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n,an;	//n��  �޴� ��, an�� �� ���� ��
	an = 0;		//an �ʱ�ȭ
	cin >> n;
	while (n < 1 || n>10000) {	//���������� ���� �ޱ� ����
		cout << "n�� 0<=n<=10000" << endl;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}
	for (int i = 1; i <= n; i++) 
		an += i;

	cout << an << endl;
}
*/