#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int a1 = 0, b1 = 0;
	for (int i = 0; i < 3; i++) {
		a1 += (a % 10) * (int)pow(10, 2 - i);
		a /= 10;
		b1 += (b % 10) * (int)pow(10, 2 - i);
		b /= 10;
	}
	cout << (a1 > b1 ? a1 : b1);
}