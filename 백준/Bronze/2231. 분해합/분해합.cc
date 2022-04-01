#include<iostream>
#include<cmath>
using namespace std;
int suma(int n, int cnt) {
	int sum = n;
	for (int i = cnt; i >= 0; i--) {
		sum += n / (int)pow(10, i);
		n %= (int)pow(10, i);
	}
	return sum;
}
int main() {
	int n, cnt = 0, iter=0;
	cin >> n;
	cnt = floor(log10(n));
	for (int i = 0; i < n; i++) {
		if (suma(i, cnt) == n) {
			iter = i;
			break;
		}
	}
	cout << iter;
}