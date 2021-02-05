#include<iostream>
#include<algorithm>	
#include<vector>	
using namespace std;

bool com(pair<int, int> a, pair<int, int> b) {
	if (a.first != b.first)			
		return a.first < b.first;	
	else
		return a.second < b.second;
}

int main() {
	int n, a, b;
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL), cout.tie(NULL);	
	cin >> n;
	vector<pair<int, int>>v;	
	for (int i = 0; i < n; i++) {
		cin >> a >> b;			
		v.push_back({ b,a });
	}
	sort(v.begin(), v.end(), com);						
	a = 0, b = 0;				
	for (int i = 0; i < v.size(); i++) {
		if (v[i].second < a)
			continue;		
		a = v[i].first;
		b++;
	}
	cout << b;
}