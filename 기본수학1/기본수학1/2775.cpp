/*
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int people(int k, int n) {
	if (k == 0)	//0층이면 n값이 사람수
		return n;
	else if (n == 1)	//1번방은 무조건 사람수가 1명
		return 1;

	return people(k - 1, n) + people(k, n - 1);	//재귀함수를 이용하여 반복한다
}												//k층n호의 사람수 = k층n-1호 사람수 + k-1층n호 사람수
int main() {
	int t;
	vector <int> v;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int k, n;
		cin >> k >> n;
		while (k < 1 || n>14) {
			cout << "1<=k, n<=14 \n";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin >> k >> n;
		}
		v.push_back(people(k, n));
	}
	for (auto i : v)	//auto는 자동으로 타입을 찾아서 넣어줌 간단하게 백터 cout하는 법
		cout << i << '\n';
}
*/