#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n, a, cnt = 0;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	vector<int> c(v.size());
	copy(v.begin(), v.end(), c.begin());
	sort(c.begin(), c.end());
	c.erase(unique(c.begin(), c.end()), c.end());
	for (int i = 0; i < n; i++) {
		cout << lower_bound(c.begin(), c.end(), v[i]) - c.begin() << ' ';
	}
}