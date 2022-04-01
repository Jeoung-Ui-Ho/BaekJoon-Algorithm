#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int arr[500001] = { 0, };
int bindo[8001] = { 0, };
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	double aver = 0;
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		aver += arr[i];
		if (arr[i] >= 0)
			bindo[4000+arr[i]]++;
		else
			bindo[4000+arr[i]]++;
	}
	sort(arr, arr + n); 
	cout << (round(aver / n)==-0?0: round(aver / n)) << '\n';
	cout << arr[n / 2] << '\n';
	int max = *max_element(bindo, bindo + 8001);
	vector <int> v;
	for (int i = 0; i < 8001; i++) {
		if (bindo[i] == max)
			v.push_back(i);
	}
	if (v.size() == 1)
		cout << v[0]-4000 << '\n';
	else
		cout << v[1]-4000 << '\n';
	cout << *max_element(arr, arr + n) - *min_element(arr, arr + n);
}