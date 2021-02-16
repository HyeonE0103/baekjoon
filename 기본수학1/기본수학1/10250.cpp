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
		while (n > h * w) {	//acm호텔이 다 찼을경우를 대비해
			cout << "방이 다 차 배정할 수 없습니다. \n";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin >> h >> w >> n;
		}
		if (n % h != 0)	
			v.push_back(((n % h) * 100) + ((n / h) + 1));	
		else   //h로 나누어지면 층수가 0으로 되어버리기 때문에 두개로 나누어 계산
			v.push_back((h * 100) + n / h);

	}
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
}
*/