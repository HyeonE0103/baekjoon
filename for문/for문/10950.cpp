#include <iostream>
#include <vector>	//���͸� ��������
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> v;	//���� ����

	for (int i = 1; i <=n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(a + b);	//a+b�� ���� ���Ϳ� �־���
	}						//���͸� ���⶧���� ũ��� �˾Ƽ� �þ

	for (int i = 0; i < v.size(); i++) {	//v�� ũ�⸸ŭ
		cout << v[i] << endl;	//������ ù��°�� �� v[0]���� �ϳ��� ���
	}
}