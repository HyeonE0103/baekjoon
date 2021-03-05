#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool com(pair<int, int> a, pair<int, int> b) {	//비교함수를 구현하지 않아도 됨
	if (a.first != b.first)						//pair<int,int>을 하면 앞을 우선 정렬 후에 뒤를 오름차순으로 정렬함
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
		/*for (int j = 0; j < i; j++) {					//같은 두점이 있으면 제외할려고 했는데 검사하면 시간초과
			if (v[j].first == a && v[j].second == b) {
				cout << "위치가 같은 두점은 없음 \n";
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