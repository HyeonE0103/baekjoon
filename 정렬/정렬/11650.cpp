#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool com(pair<int, int> a, pair<int, int> b) {	//���Լ��� �������� �ʾƵ� ��
	if (a.first != b.first)						//pair<int,int>�� �ϸ� ���� �켱 ���� �Ŀ� �ڸ� ������������ ������
		return a.first < b.first;
	else
		return a.second < b.second;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,a,b;
	vector<pair<int, int>>v;
	cin >> n;
	while (n < 1 || n>100000) {
		cout << "1<=n<=100000 \n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		*/
		/*for (int j = 0; j < i; j++) {					//���� ������ ������ �����ҷ��� �ߴµ� �˻��ϸ� �ð��ʰ�
			if (v[j].first == a && v[j].second == b) {
				cout << "��ġ�� ���� ������ ���� \n";
				return 0;
			}
		}
		*/
/*
		while (a<-100000||a>100000||b<-100000||b>100000) {
			cout << "-100000<=x,y<=100000 \n";
			cin.clear();
			cin.ignore(999, '\n');
			cin >> n;
		}
		v.push_back({ a, b });
	}
	sort(v.begin(), v.end(), com);
	for (int i = 0; i < n; i++)
		cout << v[i].first << " " << v[i].second << '\n';
}