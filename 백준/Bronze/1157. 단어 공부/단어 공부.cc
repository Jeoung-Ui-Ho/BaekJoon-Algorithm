#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main() {
	int arr[26] = { 0, };
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < 26; j++) {
			if (s[i] == 97 + j || s[i]== 65 + j) {
					arr[j]++;
			}
		}
	}
	int max = *max_element(arr, arr + 26);
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (max == arr[i])
			cnt++;
	}
	if (cnt > 1)
		cout << "?";
	else
		cout << (char)(65+(max_element(arr, arr + 26) - arr));
}