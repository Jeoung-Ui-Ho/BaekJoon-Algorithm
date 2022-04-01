#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int cmp(string a, string b) { 
	// 1. 길이가 같다면, 사전순으로 
	if (a.length() == b.length()) { return a < b; } 
	// 2. 길이가 다르다면, 짧은 순으로 
	else { return a.length() < b.length(); }
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	string s;
	vector<string> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";
}