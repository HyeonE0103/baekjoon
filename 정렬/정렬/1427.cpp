/*
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool com(int a, int b) {	//내림차순 정렬
	return a > b;
}
int main() {
	string c;
	vector<int>v;
	cin >> c;
	for (int i = 0; i < c.size(); i++) {
		v.push_back(c[i]);	//1000000000라고 해도 자리수로 생각하면 최대10자리수
	}

	sort(v.begin(), v.end(),com);

	for (auto i : v)
		cout << char(i);	//i를 출력하면 아스키코드의 숫자로 나오기때문에 문자로 바꾸어서 출력
}
*/