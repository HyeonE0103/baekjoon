#include <iostream>	//Ʋ�� ������ �ݷʸ� ��ã��
#include <vector>	//Ʋ�� ������ �𸣰���....
using namespace std;	//ū���� ���� c++�� ������ �ȵǼ� ���ڿ��� �޾Ƽ� ����

int main() {
	string  a, b;
	int num=0;
	vector <int> c, d, v;
	cin >> a >> b;
	if (a.size() >= b.size()) {
		for (int i = (a.size()-1); i >= 0; i--)
			c.push_back(int(a[i])-48);
		for (int i = (b.size()-1); i >= 0; i--)
			d.push_back(int(b[i])-48);
	}
	else {
		for (int i = (a.size() - 1); i >= 0; i--)
			d.push_back(int(a[i]) - 48);
		for (int i = (b.size() - 1); i >= 0; i--)
			c.push_back(int(b[i]) - 48);
	}

	if (c.size() > d.size()) {
		for (int i = 0; i < d.size(); i++) {
			if (c[i] + d[i] + num >= 10) {
				v.push_back(c[i] + d[i] - 10 + num);
				num = 1;
			}
			else {
				v.push_back(c[i] + d[i] + num);
				num = 0;
			}
		}
		for (int i = d.size(); i < c.size(); i++) {
			if (c[i] + num >= 10) {
				v.push_back(c[i] + num -10);
				num = 1;
			}
			else {
				v.push_back(c[i] + num);
				num = 0;
			}
		}
		if (num == 1)
			v.push_back(1);
	}
	if (c.size() == d.size()) {
		for (int i = 0; i < d.size(); i++) {
			if (c[i] + d[i] >= 10) {
				v.push_back(c[i] + d[i] - 10 + num);
				num = 1;
			}
			else {
				v.push_back(c[i] + d[i] + num);
				num = 0;
			}
		}
		if (num == 1)
			v.push_back(1);
	}
	
	for (int i = (v.size()-1); i >= 0; i--)
		cout << v[i];
	cout << '\n';
}