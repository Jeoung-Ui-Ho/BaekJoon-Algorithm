#include<iostream>
#include<string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	char nums[10] = { '9', '8', '7', '6', '5', '4', '3', '2', '1', '0' };
	string s;
	cin >> s;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < s.length(); j++) {
			if (nums[i] == s[j])
				cout << nums[i];
		}
	}
}