#include <iostream>
using namespace std;
bool func(int n);
bool func(int n) {
	int arr[4];
	int cnt = 0;
	int a;
	if (n < 100)
		return true;
	else if (n == 1000)
		return false;
	else {
		do {
			a = n % 10;
			n /= 10;
			arr[cnt] = a;
			cnt++;
		} while (n != 0);
		if (arr[0] - arr[1] == arr[1] - arr[2])
			return true;
		else
			return false;
	}
}
int main() {
	int n;
	int cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (func(i))
			cnt++;
	}
	cout << cnt;
}