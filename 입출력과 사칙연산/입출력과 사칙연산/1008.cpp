#include <iostream>
using namespace std;
int main() {
	double a, b,c;
	cin >> a >> b;
	c = a / b;
	cout.precision(10);
	cout << c <<endl;
}

/*
precision()�� �Ҽ��� �ڸ����� ���� �������� 10���� �س��ұ� ������ �Ҽ��� �ڿ� ���ڰ� 10�ڸ��� ǥ�õǴ� ��
���� float�� �̿��ϰ� �Ǹ� �Ҽ��� 6���� ��Ȯ�� ���ڸ� �����ְ�
�� ���ϴ� �̻��� ����(�����Ⱚ)�� �����ִ� 6�ڸ� �̻��� ��쿡�� double�� ����ϴ� ���� ����
*/