#include <iostream>
using namespace std;

int main() {	//int arr[1000000]�� �ص� ������ ���ʿ��� �޸� ����� ���� ��ȿ����
	int n;
	cin >> n;
	int* p = new int[n];	//���� �迭 �Ҵ� new[]������
	for (int i = 0; i < n; i++)
		cin >> p[i];

	int max = p[0];
	int min = p[0];

	for (int i = 0; i < n; i++) {
		if (max < p[i])
			max = p[i];
	}

	for (int i = 0; i < n; i++) {
		if (min > p[i])
			min = p[i];
	}

	cout << min << " " << max;
	delete[] p;	//���� �迭 ����
}