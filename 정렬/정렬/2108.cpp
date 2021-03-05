#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int nu[8001] = { 0 };
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,num,add=0,max=0,check=0;	
	int n1, n2, n3, n4;
	vector <int> v;
	cin >> n;
	while (n % 2 == 0 || n < 1 || n>500000) {
		cout << "n은 홀수,1<=n<=500000 \n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		cin >> num;
		add += num;
		if (num <= 0)
			nu[abs(num)]++;
		else
			nu[num+4000]++;
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	for (int i = 1; i <= 8000; i++) {	//최빈값을 구하기 위해 가장 많이 나타난 값을 찾음
		if (max < nu[i]) {				//max는 가장 많이 나타난 숫자의 나타난 횟수
			max = nu[i];
		}
	}
	for (int i = 4000; i >= 0; i--) {	//음수구간
		if (max == nu[i]) {
			check++;
			if (check == 2) {
				n3 = -i;
				break;
			}
			n3 = -i;
		}
	}
	if (check != 2) {	//여러개있을때에는 최빈값중 두번째로 작은 값을 출력하기 때문에 음수구간에서 
						//최빈값중 두번째로 작은 값이 있다면 양수구간에서 찾아볼 필요가 없기 때문에
		for (int i = 4001; i <= 8000; i++) {	//양수구간
			if (max == nu[i]) {
				check++;
				if (check == 2) {
					n3 = i - 4000;
					break;
				}
				n3 = i - 4000;
			}
		}
	}
	n1 = (int)round(add /(double)n);	//소수첫째자리에서 반올림 round 이용
	n2 = v[v.size() / 2];			//중앙값
	n4 = v[v.size() - 1] - v[0];	//순서대로 정렬한 순서에서 끝과 처음을 뺌

	cout<< n1 << '\n' << n2 << '\n' << n3 << '\n' << n4;
	//산술평균 중앙값 최빈값 범위
}