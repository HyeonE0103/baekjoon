/*
#include <iostream>
#include <algorithm>
using namespace std;	//�޸� �������� ���� ���ͻ��x ī���������� ����ؾ���

int an[10001];	//10000���� �۰ų� ���� ��
int main() {
	ios_base::sync_with_stdio(0);	//�ϳ��ϳ� ��� �ϴ°ű⶧���� �ð��̸��� �ɸ�
	cin.tie(0); cout.tie(0);	//�ð��� �����Ű�� ����
	int n,x;
	cin >> n;
	while (n < 1 || n>10000000) {
		cout << "1<=n<=10000000 \n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		cin >> x;
		an[x]++;
	}
	for (int i = 1; i <= 10000; i++) {	//1~10000
		for (int j = 0; j < an[i]; j++)
			cout << i << '\n';
	}
}
*/