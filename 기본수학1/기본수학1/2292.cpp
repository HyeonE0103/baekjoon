#include <iostream>
using namespace std;

int main() {
	int n, num = 1;
	cin >> n;
	for (int i = 1; 1 < n; i++) {
		n = n - (i * 6);
		num++;
	}
	cout << num << endl;
}