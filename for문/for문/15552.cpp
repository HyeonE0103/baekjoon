/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	//c�� c++�� ����� ��Ʈ���� ���� ����ȭ �Ǿ��ִµ� ����ȭ�� ����
										//����ϴ� buffer�� ���� �ٿ��� c++�� ����� ��ü ����ð��� ��� ��Ŵ
	cin.tie(NULL);	//������ ���۸� ����Ҽ� �ְԤ� ���־� ȿ������ ����
	// �� �ΰ��� �ڵ带 �� �̿��ϸ� �ӵ� ����� ��
	//����� endl�� ������ ������ִ� ���Ұ� ���۸� ����ִ� ������ ���ÿ� ������
	//endl ��� '\n'�� ����ϴ� ���� �ð��� ���̴µ� ������ ��

	int n;
	cin >> n;
	vector <int> v;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(a + b);
	}
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
}
*/