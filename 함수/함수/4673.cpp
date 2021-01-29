#include <iostream>
using namespace std;

int con(int num) {	//d(n)함수
	int n = num;
	while (num != 0) {			//즉 100이면
		n = n + (num % 10);		//계속 돌려서 100 + 0 + 0 + 1 = 101
		num = num / 10;
	}
	return n;	//d(n)
}

int selfnum(int v[]) {
	for (int i = 1; i <= 10000; i++) {
		if (v[i] == 0) {	//이미 했던 수는 다시 할 필요 없어서
			for (int j = i; j <= 10000;) {
				if (con(j) <= 10000) {
					v[con(j)] = 1;	//생성자가 있는 숫자는 1로 만듬
					j = con(j);		//그 다음 수열을 위해 j를 바꿔준다
				}
				else
					j = con(j);
			}
		}
	}
	for (int i = 1; i <= 10000; i++) {	//셀프넘버를 뽑아보자
		if (v[i] == 0)
			cout << i << endl;
	}
	return 0;
}

int main() {
	int a[10001] = { 0, };	//배열 생각하니 너무 헷갈려서 1번째가 1이라 생각하기 위해 10000 +1
	selfnum(a);				//0번째 인덱스는 0이라 생각하고 버림
}