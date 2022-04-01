#include<iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	///////////////
	float arr[1000];
	int a, b, maxValue;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		arr[i] = b;
	}
	float ever = 0.0;
	maxValue = *max_element(arr, arr + a);
	for (int i = 0; i < a; i++) {
		arr[i] /=(maxValue * 100);
		ever += arr[i];
	}
	cout << (ever / a) * 10000;
}