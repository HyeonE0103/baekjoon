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
			if (check[i] == true)	//���� �������� Ȯ��
				continue;
			else {
				check[i] = true;
				result[num] = i;
				dfs(num + 1);	//���� ������ ������
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
//��Ʈ��ŷ�� ��� ������ ���� ���캸�� ���ε� �� ������ ������ �� ��
//��� ����� ���� ��� ã�� �ͺ��� '��쿡 ����' �ξ� ���� �� ����
//�Ϲ������� DFS(���� �켱Ž��)�� ���Ͽ� �����ϴµ� BFS(���� �켱Ž��)�� ��� ��������� ���� �޸𸮰� �ʿ��ϱ� ����