#include <iostream>
#include <climits>
using namespace std;

int main() {
	int h, m;
	cin >> h >> m;
	while (h < 0 || h>23 || m < 0 || m>59) {
		cout << "0<=h<=23, 0<==m<=59" << endl;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		
		cin >> h >> m;
	}
	if (m >= 45) {
		m = m - 45;		//m -= 45
	}
	else {
		m = 60 - 45 + m;
		if (h == 0)
			h = 23;
		else
			h--;
	}
	cout << h<<" " << m<< endl;
}
