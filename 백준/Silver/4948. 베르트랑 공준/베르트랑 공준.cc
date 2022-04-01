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
int main() {
	int n, cnt = 0;
	bool* eratosthenes = new bool[(123456 * 2) + 1];
	fill_n(eratosthenes, (123456 * 2) + 1, 1);
	eratosthenes[1] = false;
	for (int i = 2; i * i <= 123456 * 2; i++) {
		if (eratosthenes[i]) 
			for (int j = i * i; j <= 123456 * 2; j += i)
				eratosthenes[j] = false;
	}
	while (1) {
		cin >> n;
		if (n == 0)
			break;
		for (int i = n + 1; i <= 2 * n; i++) {
			if (eratosthenes[i])
				cnt++;
		}
		cout << cnt << '\n';
		cnt = 0;
	}
}