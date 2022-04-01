#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int a;
	cin >> a;
	for (int i = a; i >= 1; i--) {
		cout << i << "\n";
	}
}