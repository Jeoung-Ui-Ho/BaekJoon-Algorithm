#include<iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[10] = { 0, };
	char c_arr[10] = { '0','1','2','3','4','5','6','7','8', '9' };
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	string s = to_string(a * b * c);
	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < 10; j++) {
			if (s.at(i) == c_arr[j])
				arr[j]++;
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
}