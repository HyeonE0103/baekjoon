/*
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool com(int a, int b) {	//�������� ����
	return a > b;
}
int main() {
	string c;
	vector<int>v;
	cin >> c;
	for (int i = 0; i < c.size(); i++) {
		v.push_back(c[i]);	//1000000000��� �ص� �ڸ����� �����ϸ� �ִ�10�ڸ���
	}

	sort(v.begin(), v.end(),com);

	for (auto i : v)
		cout << char(i);	//i�� ����ϸ� �ƽ�Ű�ڵ��� ���ڷ� �����⶧���� ���ڷ� �ٲپ ���
}
*/