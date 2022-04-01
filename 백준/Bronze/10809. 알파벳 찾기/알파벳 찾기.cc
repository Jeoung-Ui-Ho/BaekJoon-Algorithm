#include<iostream>
#include<string>
using namespace std;
int main() {
	int arr[26];
	for (int i = 0; i < 26; i++)
		arr[i] = -1;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < 26; j++) {
			if (s[i] == 97 + j) {
				if(arr[j]==-1)
					arr[j] = i;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
}