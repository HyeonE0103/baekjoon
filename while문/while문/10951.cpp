#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
	int a, b,n=0;
	vector <int> v;
	while (cin >> a >> b) {	// a,b != EOF ->�����󿡴� ���������� ����
		v.push_back(a + b);	//EOF�� End Of File�� ����, �����ǳ��� ������ ���� ���Ѱ�(ctrl+Z ������ ����)
		n++;				//Visual Studio������ -1�� define �Ǿ�����
	}
	
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
}