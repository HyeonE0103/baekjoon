#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main() {
	int n,num=0;
	cin >> n;
	while (n < 1||n>10000) {
		cout << "1<=n<=10000 \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}
	for (int i = 666; ; i++) {
		string s = to_string(i);
		if (s.find("666") != -1)	//666���� ���ڸ� �����ش�
			num++;
		if (num == n) {				//666�̵� ���ڹ�°�� n��°�� ������ ���
			cout << i;
			return 0;
		}
	}
}
//������ �� �����غ��ƾ��� �ڿ� 666���� �����Ȱ� �ƴ�
//666 1666 2666 3666 4666 5666 6660 6661 ....