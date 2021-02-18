/*
#include <iostream>
#include <climits>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, an =0;
	cin >> n;
	while (n < 0 || n>100) {
		cout << "1<=n<=100 \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}
	for (int i = 0; i < n; i++) {	
		int num;
		cin >> num;
		for (int j = 2; j <= num; j++) {
			if (num == j)
				an++;
			else if (num % j == 0)
				break;
		}
	}
	cout << an << '\n';
}
*/