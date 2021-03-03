#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n,x,y,num;
	vector<pair<int, int>> v;
	cin >> n;
	while (n < 2 || n>50) {
		cout << "2<=n<=50 \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		while (x<10|| x>200|| y < 10 || y>200) {
			cout << "10<=x,y<=200 \n";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin >> x>>y;
		}
		v.push_back({ x,y });
	}

	for (int i = 0; i < n; i++) {
		num = 1;	//1등부터
		for (int j = 0; j < n; j++) {
			if (i != j) {
				if (v[i].first < v[j].first && v[i].second < v[j].second)
					num++;	//내 몸무게와 키가 낮으면 등수가 높아짐
			}
		}
		cout << num << ' ';
	}
}