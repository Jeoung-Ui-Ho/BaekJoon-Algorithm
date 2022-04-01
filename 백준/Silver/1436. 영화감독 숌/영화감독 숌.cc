#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	int n, num=666,cnt = 0;
	cin >> n;
	while (1) {
		if (to_string(num).find("666") != string::npos) {
			cnt++; num++;
			if (cnt == n) {
				cout << num-1;
				break;
			}
		}
		else
			num++;
	}
}