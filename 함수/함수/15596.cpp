#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int> &a) {
	long long ans=0;
	for (int i = 0; i < a.size(); i++) {
		ans  += long(a[i]);
	}
	return ans;
}	//여기까지 제출하면 완료

int main() {
	int n;
	cin >> n;
	vector <int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	cout << sum(v) << endl;
}