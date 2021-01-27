#include <iostream>
#include <string>	//to_string 이용하기 위해
using namespace std;

int main() {
	int arr[10] = { 0,0,0,0,0,0,0,0,0,0 };	//방법 1
	int a, b, c;							//나머지와 나누기를 이용해 단위마다 확인하는 방법
	cin >> a >> b >> c;
	int n = a * b * c;

	while (n != 0) {
		arr[n % 10]++;
		n = n / 10;
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i] << '\n';
}

/*
int main() {
	int arr[10] = { 0,0,0,0,0,0,0,0,0,0 };	//방법 2
	int a, b, c;							//string을 이용해 각 글자마다 확인하는 방법
	string s = "";
	cin >> a >> b >> c;
	int n = a * b * c;

	s = to_string(n);

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '0') {
			arr[0]++;
			continue;
		}
		else if (s[i] == '1') {
			arr[1]++;
			continue;
		}
		else if (s[i] == '2') {
			arr[2]++;
			continue;
		}
		else if (s[i] == '3') {
			arr[3]++;
			continue;
		}
		else if (s[i] == '4') {
			arr[4]++;
			continue;
		}
		else if (s[i] == '5') {
			arr[5]++;
			continue;
		}
		else if (s[i] == '6') {
			arr[6]++;
			continue;
		}
		else if (s[i] == '7') {
			arr[7]++;
			continue;
		}
		else if (s[i] == '8') {
			arr[8]++;
			continue;
		}
		else if (s[i] == '9') {
			arr[9]++;
			continue;
		}
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i] << '\n';
}
*/