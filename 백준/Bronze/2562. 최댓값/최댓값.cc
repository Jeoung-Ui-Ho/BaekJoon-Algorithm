#include<iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[9];
	int a;
	for (int i = 0; i < 9; i++) {
		cin >> a;
		arr[i] = a;
	}
	cout << *max_element(arr, arr + 9) << endl;
	cout << (max_element(arr, arr + 9) - arr) + 1;
}