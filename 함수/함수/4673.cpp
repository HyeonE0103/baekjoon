#include <iostream>
using namespace std;

int con(int num) {	//d(n)�Լ�
	int n = num;
	while (num != 0) {			//�� 100�̸�
		n = n + (num % 10);		//��� ������ 100 + 0 + 0 + 1 = 101
		num = num / 10;
	}
	return n;	//d(n)
}

int selfnum(int v[]) {
	for (int i = 1; i <= 10000; i++) {
		if (v[i] == 0) {	//�̹� �ߴ� ���� �ٽ� �� �ʿ� ���
			for (int j = i; j <= 10000;) {
				if (con(j) <= 10000) {
					v[con(j)] = 1;	//�����ڰ� �ִ� ���ڴ� 1�� ����
					j = con(j);		//�� ���� ������ ���� j�� �ٲ��ش�
				}
				else
					j = con(j);
			}
		}
	}
	for (int i = 1; i <= 10000; i++) {	//�����ѹ��� �̾ƺ���
		if (v[i] == 0)
			cout << i << endl;
	}
	return 0;
}

int main() {
	int a[10001] = { 0, };	//�迭 �����ϴ� �ʹ� �򰥷��� 1��°�� 1�̶� �����ϱ� ���� 10000 +1
	selfnum(a);				//0��° �ε����� 0�̶� �����ϰ� ����
}