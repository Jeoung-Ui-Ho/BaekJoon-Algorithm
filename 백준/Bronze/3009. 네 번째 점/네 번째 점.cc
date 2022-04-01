#include<iostream>
#include <algorithm>
using namespace std;
int main() {
	int x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	cout << (x1 == x2 ? x3 : (x2 == x3) ? x1 : x2) << ' ' << (y1 == y2 ? y3 : (y2 == y3) ? y1 : y2);
}