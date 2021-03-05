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
		cin >> sen;	//띄어쓰기 없어서 cin으로 받음
		v.push_back(sen);
	}
	sort(v.begin(), v.end(), com);

	v.erase(unique(v.begin(), v.end()), v.end());	//unique을 이용해 벡터 중복제거 <방법2>
	for (auto i : v)
		cout << i << '\n';
}
/*
	for (int i = 0; i < v.size(); i++) {
		if (i != v.size() - 1) {	//조건을 안넣으면 벡터크기이상으로 조건검사가 되므로(+1 때문에)
			if (v[i] != v[i + 1])	//단어가 중복되면 출력되지 않도록 출력문에서 조절 <방법1>
				cout << v[i] << '\n';
		}
		else
			cout << v[i] << '\n';
	}
}
*/