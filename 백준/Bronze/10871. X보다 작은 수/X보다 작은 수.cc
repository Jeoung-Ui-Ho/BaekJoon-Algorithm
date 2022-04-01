#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int a, b, t;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> t;
		if (t < b)
			cout << t << " ";
	}
}