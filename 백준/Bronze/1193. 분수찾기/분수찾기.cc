#include<iostream>
using namespace std;
int main() {
	int n, cnt = 1;
	cin >> n;
	while (cnt < n) {
		n -= cnt;
		cnt++;
	}
	if (cnt % 2 == 1)
		cout << cnt + 1 - n << "/" << n << endl;
	else
		cout << n << '/' << cnt + 1 - n << endl;
}