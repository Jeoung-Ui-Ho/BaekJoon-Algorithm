#include<iostream>
#include<algorithm>
using namespace std;
int arr[10001] = { 0, };
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,a,cnt=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		arr[a]++;
	}
	for (int i = 1; i < 10001; i++) {
		if(arr[i]!=0)
			for (int j = 0; j < arr[i]; j++) {
				cout << i << '\n';
				cnt++;
				if(cnt==n)
					break;
			}
	}
}