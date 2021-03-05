#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool com(string a, string b) {
	if (a.size() != b.size())
		return a.size() < b.size();
	else
		return a < b;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	vector <string> v;
	cin >> n;
	while (n < 1 || n>20000) {
		cout << "1<=n<=20000 \n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		string sen;
		cin >> sen;	//���� ��� cin���� ����
		v.push_back(sen);
	}
	sort(v.begin(), v.end(), com);

	v.erase(unique(v.begin(), v.end()), v.end());	//unique�� �̿��� ���� �ߺ����� <���2>
	for (auto i : v)
		cout << i << '\n';
}
/*
	for (int i = 0; i < v.size(); i++) {
		if (i != v.size() - 1) {	//������ �ȳ����� ����ũ���̻����� ���ǰ˻簡 �ǹǷ�(+1 ������)
			if (v[i] != v[i + 1])	//�ܾ �ߺ��Ǹ� ��µ��� �ʵ��� ��¹����� ���� <���1>
				cout << v[i] << '\n';
		}
		else
			cout << v[i] << '\n';
	}
}
*/