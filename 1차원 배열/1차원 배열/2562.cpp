#include <iostream>
#include <climits>
using namespace std;

int main() {
	int arr[9];
	int n = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		while (arr[i] < 0 || arr[i] > 100) {
			cout << "100���� ���� �ڿ��� \n";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin >> arr[i];
		}
	}

	int max = arr[0];

	for (int i = 0; i < 9; i++) {
		if (max <= arr[i]) {	//�̻��� �ƴ϶� �ʰ��� �ϸ� Ʋ���ɷ� ����.
			max = arr[i];		//������ n�� �ʱⰪ�� 0���� �־��µ� ù��° ���ڰ� �ִ밪�� ��� n�� 1�̾���ϱ⶧��
			n = i + 1;			//�ʰ��� �������� n�� ���� 1�� ���� max<arr[i]�� ������ �ȴ�.
		}
	}
	cout << max << '\n' << n;
	return 0;

}