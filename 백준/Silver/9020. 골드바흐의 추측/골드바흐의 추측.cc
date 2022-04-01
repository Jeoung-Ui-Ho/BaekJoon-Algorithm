#include<iostream>
#include <cmath>
using namespace std;
bool isPrime(int n);//소수판독
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
bool* era(int n);
bool* era(int n) {
	bool* eratosthenes = new bool[n + 1];
	fill_n(eratosthenes, n + 1, 1);
	eratosthenes[0] = false;
	eratosthenes[1] = false;
	for (int i = 2; i * i <= n; i++) {
		if (eratosthenes[i])
			for (int j = i * i; j <= n; j += i)
				eratosthenes[j] = false;
	}
	return eratosthenes;
}
int main() {
	bool *arr = era(10000);
	int n, t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		if (arr[n/2])
			cout << n / 2 << ' ' << n / 2 << '\n';
		else {
			for (int j = 1; j < n / 2; j++) {
				if (arr[n / 2 - j] && arr[n / 2 + j]) 
					if ((n / 2 - j) + (n / 2 + j) == n) {
						cout << n / 2 - j << ' ' << n / 2 + j << '\n';
						break;
					}
			}
		}
	}
}