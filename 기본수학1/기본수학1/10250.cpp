/*
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
	int t;
	cin >> t;
	vector <int> v;
	for (int i = 0; i < t; i++) {
		int h, w, n, an;
		cin >> h >> w >> n;
		while (n > h * w) {	//acmȣ���� �� á����츦 �����
			cout << "���� �� �� ������ �� �����ϴ�. \n";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin >> h >> w >> n;
		}
		if (n % h != 0)	
			v.push_back(((n % h) * 100) + ((n / h) + 1));	
		else   //h�� ���������� ������ 0���� �Ǿ������ ������ �ΰ��� ������ ���
			v.push_back((h * 100) + n / h);

	}
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
}
*/