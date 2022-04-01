#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout << a * (b - ((b / 100) * 100) - (((b - ((b / 100) * 100)) / 10) * 10)) << endl;
	cout << a * ((b - ((b / 100) * 100)) / 10) << endl;
	cout << a * (b / 100) << endl;
	cout << a * b;
}