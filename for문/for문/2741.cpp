#include <iostream>
#include <climits>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	//이거 안해서 시간초과로 틀림
	cin.tie(NULL);

	int n;
	cin >> n;

	while (n < 1 || n>100000) {
		cout << "n은 1<=n<=100000" << '\n';
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}

	for (int i = 1; i <= n; i++)
		cout << i << '\n';
}