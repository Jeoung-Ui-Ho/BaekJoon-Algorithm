#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int cnt = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			if (i == 0 || i == s.length() - 1)
				continue;
			cnt++;
		}
	}
	if (s.empty())
		cout << "0";
	else if (s.length() == 1 && s[0] == ' ')
		cout << "0";
	else
		cout << cnt + 1;
}