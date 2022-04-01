#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	a -= 1;
	int cnt = 1, b = 1;
	if (a == 0)
		cout << 1;
	else if (a <= 6)
		cout << 2;
	else {
		while (1) {
			if (a<=b*6)
				break;
			cnt++;
			b = b + cnt;
		}
		cout << cnt + 1;
	}
}