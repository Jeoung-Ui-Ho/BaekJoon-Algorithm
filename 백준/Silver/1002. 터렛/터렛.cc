#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double p, x1, x2, y1, y2, r1, r2;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		if (x1 == x2 && y1 == y2 && r1 == r2) {
			cout << -1 << "\n";
			continue;
		}
		p = sqrt(pow(fabs(x2 - x1), 2) + pow(fabs(y2 - y1), 2));
		if (p < r1 + r2 && fabs(r1 - r2) < p)
			cout << 2 << '\n';
		else if (p == r1 + r2&& fabs(r1 - r2) == p)
			cout << 1 << '\n';
		else {
			if (p > r1 + r2 || fabs(r1 - r2) > p)
				cout << 0 << '\n';
			else
				cout << 1 << '\n';
		}
	}
}