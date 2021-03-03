#include <iostream>
#include <climits>
#include <string>
using namespace std;

int cor = INT_MAX;	//전역변수로 해야 함수에서 바꾸기 편함
string board[50];	//최대 50

string wb[8] = {	//흰색으로 시작하는 체스판
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"}
};
string bb[8] = {	//검정으로 시작하는 체스판
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"}
};

void comwb(int x, int y) {
	int num = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (wb[i][j] != board[y + i][x + j])	//보드와 체스판 비교
				num++;
		}
	}
	if (num < cor)	//더 적게 색칠한다면 바꿔줌
		cor = num;
}

void combb(int x, int y) {
	int num = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (bb[i][j] != board[y + i][x + j])	//보드와 체스판 비교
				num++;
		}
	}
	if (num < cor)
		cor = num;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> board[i];
	for (int x = 0; x < m - 7; x++) {	//8*8 체스판을 만드는 것이기 때문에 비교는 8*8만 하면됨
		for (int y = 0; y < n - 7; y++) {	//한개씩 늘려가며 비교하는 사각형을 바꿔줌
			comwb(x, y);
			combb(x, y);
		}
	}
	cout << cor;
	return 0;
}