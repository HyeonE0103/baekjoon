#include <iostream>
#include <vector>	//벡터를 쓰기위해
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> v;	//벡터 생성

	for (int i = 1; i <=n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(a + b);	//a+b의 값을 벡터에 넣어줌
	}						//벡터를 쓰기때문에 크기는 알아서 늘어남

	for (int i = 0; i < v.size(); i++) {	//v의 크기만큼
		cout << v[i] << endl;	//벡터의 첫번째값 즉 v[0]부터 하나씩 출력
	}
}