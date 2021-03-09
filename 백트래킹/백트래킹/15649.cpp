#include <iostream>
using namespace std;

int n, m;
bool check[9];
int result[9];

void dfs(int num) {
	if (num == m) {
		for (int i = 0; i < m; i++)
			cout << result[i]<<" ";
		cout << '\n';
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (check[i] == true)	//썻던 수였는지 확인
				continue;
			else {
				check[i] = true;
				result[num] = i;
				dfs(num + 1);	//깊이 밑으로 내려감
				check[i] = false;
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	cin >> n >> m;
	while (1 > n || 1 > m || n > 8 || m > 8) {
		cout << "1<=n,m<=8 \n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> m >> n;
	}
	dfs(0);

	return 0;
}
//백트래킹은 모든 조합의 수를 살펴보는 것인데 단 조건을 만족할 때 만
//모든 경우의 수를 모두 찾는 것보다 '경우에 따라' 훨씬 빠를 수 있음
//일반적으로 DFS(깊이 우선탐색)을 통하여 구현하는데 BFS(넓이 우선탐색)의 경우 상대적으로 많은 메모리가 필요하기 때문