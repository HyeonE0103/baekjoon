#include <iostream>
#include <climits>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	//�̰� ���ؼ� �ð��ʰ��� Ʋ��
	cin.tie(NULL);

	int n;
	cin >> n;

	while (n < 1 || n>100000) {
		cout << "n�� 1<=n<=100000" << '\n';
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
	}

	for (int i = 1; i <= n; i++)
		cout << i << '\n';
}