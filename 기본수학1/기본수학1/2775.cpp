/*
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int people(int k, int n) {
	if (k == 0)	//0���̸� n���� �����
		return n;
	else if (n == 1)	//1������ ������ ������� 1��
		return 1;

	return people(k - 1, n) + people(k, n - 1);	//����Լ��� �̿��Ͽ� �ݺ��Ѵ�
}												//k��nȣ�� ����� = k��n-1ȣ ����� + k-1��nȣ �����
int main() {
	int t;
	vector <int> v;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int k, n;
		cin >> k >> n;
		while (k < 1 || n>14) {
			cout << "1<=k, n<=14 \n";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin >> k >> n;
		}
		v.push_back(people(k, n));
	}
	for (auto i : v)	//auto�� �ڵ����� Ÿ���� ã�Ƽ� �־��� �����ϰ� ���� cout�ϴ� ��
		cout << i << '\n';
}
*/