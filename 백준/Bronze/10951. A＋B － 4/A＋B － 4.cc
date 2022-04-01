#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b;
	while (1){
		cin >> a >> b;
		if (cin.eof()==true)
			break;
		cout << a + b << endl;
	}
}