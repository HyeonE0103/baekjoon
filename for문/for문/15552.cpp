/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	//c와 c++의 입출력 스트림이 서로 동기화 되어있는데 동기화를 끊어
										//사용하는 buffer의 수를 줄여서 c++의 입출력 객체 실행시간을 향상 시킴
	cin.tie(NULL);	//독립된 버퍼를 사용할수 있게ㅐ 해주어 효율성을 높임
	// 이 두개의 코드를 잘 이용하면 속도 향상이 됨
	//참고로 endl은 공백을 만들어주는 역할과 버퍼를 비워주는 역할을 동시에 함으로
	//endl 대신 '\n'을 사용하는 것이 시간을 줄이는데 도움을 줌

	int n;
	cin >> n;
	vector <int> v;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(a + b);
	}
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
}
*/