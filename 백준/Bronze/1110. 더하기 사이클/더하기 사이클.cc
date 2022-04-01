#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,res,count;
	cin >> res;
	a = res;
	count = 0;
	while(1) {
		if (a == 0) {
			count++;
			cout << count;
			break;
		}
		else if (a < 10) {
			a = a * 10 + a;
			count++;
		}
		else {
			a = (a % 10 * 10) + ((a / 10 + a % 10) % 10);
			count++;
		}
		if (a == res) {
			cout << count;
			break;
		}
	}
}