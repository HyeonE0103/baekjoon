#include<iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int m, n;
	cin >> m >> n;
	while (1 > m || 1 > n || m > n || m > 1000000 || n > 1000000) {
		cout << "1<=m<=n<=1000000 \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> m >> n;
	}
	vector <bool> v(n + 1, true);	//n+1해야 0부터 n개까지 가능
	v[0] = false;	//0은소수 아님
	v[1] = false;	//1은 소수 아님
	for (int i = 2; i <= n; i++) {
		if (v[i]) {	//false면 소수가 아닌거니깐 true만 확인하면 됨
			for (int j = 2 * i; j <= n; j += i)	//소수의 n배수들은 모두 소수가 아님
				v[j] = false;
		}
	}
	for (int i = m; i <= n; i++) {
		if (v[i])	//소수라면
			cout << i << '\n';
	}
	/*
	for (int i = m; i <= n; i++) {	//시간초과... 당연히... 에라토스테네스의 체를 이용
		for (int j = 2; j <= i; j++) {
			if (i == j)
				cout << i << '\n';
			else if (i % j == 0)
				break;
		}
	}
	*/
}