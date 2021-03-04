/*
#include <iostream>
#include <algorithm>
using namespace std;	//메모리 제한으로 인해 벡터사용x 카운팅정렬을 사용해야함

int an[10001];	//10000보다 작거나 같은 수
int main() {
	ios_base::sync_with_stdio(0);	//하나하나 세어서 하는거기때문에 시간이많이 걸림
	cin.tie(0); cout.tie(0);	//시간을 단축시키기 위해
	int n,x;
	cin >> n;
	while (n < 1 || n>10000000) {
		cout << "1<=n<=10000000 \n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		cin >> x;
		an[x]++;
	}
	for (int i = 1; i <= 10000; i++) {	//1~10000
		for (int j = 0; j < an[i]; j++)
			cout << i << '\n';
	}
}
*/