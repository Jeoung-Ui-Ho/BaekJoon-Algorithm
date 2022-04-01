#include <iostream>
using namespace std;
void self_number();
int d(int n);
int arr[10000];
int d(int a) {
	int b;
	int sum = a;
	do {
		b = a % 10;
		sum = sum + b;
		a = a / 10;
	} while (a != 0);
	return sum;
}
void self_number() {
	for (int i = 0; i < 10000; i++) {
		arr[d(i + 1)] = 1;
	}
	for (int j = 1; j < 10000; j++) {
		if (arr[j] != 1)
			cout << j  << "\n";
	}
}
int main() {
	self_number();
}