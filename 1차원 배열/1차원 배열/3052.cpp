
#include <iostream>
using namespace std;

int main() {	//풀이1
	int arr[10];
	int n = 0;
	
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		arr[i] = arr[i] % 42;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (arr[i] != -1) {
				if (arr[i] == arr[j]) {
					arr[j] = -1;
				}
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		if (arr[i] != -1)
			n++;
	}
	cout << n << endl;
}
/*
int main() {	//풀이2
	int n=0;
	int arr[42] = { 0, };	//42개의 0을 칠수 없으니 간편하게
	for (int i = 0; i < 10; i++) {	//초기화는 꼭 시키도록 하자 쓰레기값을 얻으니
		int a;
		cin >> a;
		arr[a % 42]++;
	}
	for (int i = 0; i < 42; i++) {
		if (arr[i] != 0)
			n++;
	}
	cout << n << endl;
}

*/