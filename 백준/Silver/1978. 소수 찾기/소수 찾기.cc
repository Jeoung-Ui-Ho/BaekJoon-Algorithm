#include<iostream>
#include <cmath>
using namespace std;
bool isPrime(int n);
bool isPrime(int n) {
	if (n < 2)
		return false;
	else if (n >= 2 && n <= 7) {
		if (n == 2 || n == 3 || n == 5 || n == 7)
			return true;
		else
			return false;
	}
	else {
		for (int i = 2; i < n/2; i++) {
			if (n % i == 0) {
				return false;
			}
		}
		return true;
	}
}
int main() {
	int t, n, cnt = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		if (isPrime(n)) {
			cnt++;
		}
	}
	cout << cnt;
}