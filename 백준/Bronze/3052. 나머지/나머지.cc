#include<iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	///////////////
	int a;
	int count = 0;
	int arr[10];
	int* p;
	for (int i = 0; i < 10; i++) {
		cin >> a;
		arr[i] = (a % 42);
	}
	for (int i = 0; i < 10; i++) {
		p = find(arr + (i + 1), arr + 10, arr[i]);
		if (p == arr + 10)
			count++;
	}
	cout << count;
}