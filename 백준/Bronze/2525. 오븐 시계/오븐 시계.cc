#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b;
	cin >> c;
	a += c / 60;
	b += c % 60;
	if (b == 60) {
		b = 0;
		a++;
	}
	if (b > 60) {
		a++;
		b -= 60;
	}
	if (a >= 24)
		a -= 24;
	cout << a << " " << b;
}