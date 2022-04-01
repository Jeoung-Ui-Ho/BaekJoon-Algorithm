#include<iostream>
using namespace std;
int main() {
	char c[100];
	int a, sum = 0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> c[i];
		for (int j = 0; j < 10; j++) {
			if ((int)c[i] == 48 + j)
				sum += 0 + j;
		}
	}
	cout << sum;
}