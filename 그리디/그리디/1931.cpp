#include<iostream>
#include<algorithm>	//lower_bound, upper_bound, sort
					//앞에 2개는 이진탐색으로 원소를 탐색하는 함수, 오른차순 정렬함수
#include<vector>	
using namespace std;

bool com(pair<int, int> a, pair<int, int> b) {
	if (a.first != b.first)			//끝나는 시간이 같지 않으면
		return a.first < b.first;	//끝나는  시간이 작은것 부터
	else
		return a.second < b.second;	//끝나는 시간이 같다면 시작시간이 빠른것부터
}

int main() {
	int n, a, b;
	ios_base::sync_with_stdio(false);	//속도 향샹을 위해, 스트림 동기화 여부
	cin.tie(NULL), cout.tie(NULL);		//각 IO작업전에 flush할 건지에 대한 설정
	cin >> n;
	vector<pair<int, int>>v;	//pair은 두개의 객체를 묶어주는 형태
	for (int i = 0; i < n; i++) {	//vector은 컨테이너 같은 역활로 
		cin >> a >> b;				//메모리 할당과 삭제를 해주는 배열같은 존재
		v.push_back({ b,a });	//fist는 끝나는 시간, second는 시작시간
	}
	sort(v.begin(), v.end(), com);	//sort(배열의 시작주소, 배열의 마지막 주소)
								//가장먼저 시작한다고 가장먼저 끝나는 것이 아니기 때문에 끝나는 시간으로 정렬
	a = 0, b = 0;				//a = 끝나는 시간(=현시간), b = 회의의 최대 개수
	for (int i = 0; i < v.size(); i++) {
		if (v[i].second < a)	//a는 끝나는 시각, 회의실을 동시에 사용할수 없으니
			continue;			//시작시간은 끝나는 시간보다 작을 수 없음. 새로운 아이를 찾으로 continue
		a = v[i].first;		
		b++;
	}
	cout << b;
}