#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	int a;
	int cnt = 0;
	bool ck = 1;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> s; 
		for (int j = 0; j < s.length()-1; j++){
			if (s[j] == s[j + 1])
				continue;
			else {
				for (int k = j + 1; k < s.length(); k++) {
					if (s[k] == s[j]) {
						j = s.length();
						ck = 0;
					}
				}
			}
		}
		if (ck)
			cnt++;
		else
			ck = 1;
	}
	cout << cnt;
}