#include <iostream>
#include <climits>
using namespace std;

int main() {
	int arr[9];
	int n = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		while (arr[i] < 0 || arr[i] > 100) {
			cout << "100보다 작은 자연수 \n";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin >> arr[i];
		}
	}

	int max = arr[0];

	for (int i = 0; i < 9; i++) {
		if (max <= arr[i]) {	//이상이 아니라 초과를 하면 틀린걸로 나옴.
			max = arr[i];		//문제에서는 9개의 서로 다른 자연수라고 나왔는데
			n = i + 1;			//초과와 이상으로 맞고 틀림이 나오는지 모르겠음
		}
	}
	cout << max << '\n' << n;
	return 0;

}