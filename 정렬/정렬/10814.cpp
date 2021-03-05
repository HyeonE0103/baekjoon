#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool com(pair<int, string>a, pair<int, string> b) {
	return a.first < b.first;
}

int main() {
	int n, num;
	string name;
	vector <pair<int, string>>v;
	cin >> n;
	while (n < 1 || n>100000) {
		cout << "1<=n<=100000 \n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		cin >> num >> name;
		v.push_back({ num,name });
	}
	stable_sort(v.begin(), v.end(),com);	//��⼭ �߿������� sort�� �ƴϰ� stable_sort�����
										//stable_sort�� ��ü�� ������ �����Ѵ�
	for (int i = 0; i < n; i++)
		cout << v[i].first << " " << v[i].second << '\n';
}