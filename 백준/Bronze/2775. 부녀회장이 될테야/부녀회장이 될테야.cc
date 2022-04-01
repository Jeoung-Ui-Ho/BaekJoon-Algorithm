#include<iostream>
using namespace std;
int self(int k, int n);
int self(int k, int n) {
	if (k == 0)
		return n;
	else if (n == 1)
		return 1;
	else
		return self(k, n - 1) + self(k - 1, n);
}
int main() {
	int t, k, n, res;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> k;
		cin >> n;
		res = self(k, n);
		cout << res << endl;
	}
}