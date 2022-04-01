#include<iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	///////////////
	int c, n;
	int cnt = 0;
	int arr[1000];
	cin >> c;
	double aver = 0;
	for (int i = 0; i < c; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
			aver += arr[j];
		}
		aver /= n;
		for (int k = 0; k < n; k++) {
			if (arr[k] > aver)
				cnt++;
		}
		printf("%.3f%%\n", (double)cnt / n * 100);
		aver = 0.0;
		cnt = 0;
	}
}