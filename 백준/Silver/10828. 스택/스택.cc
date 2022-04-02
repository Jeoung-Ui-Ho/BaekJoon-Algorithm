#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	ios::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);
	int n, num;
	string s;
	stack<int> st;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "push") {
			cin >> num;
			st.push(num);
		}
        else if (s == "pop") {    
            if (!st.empty()) {
                cout << st.top() << '\n';
                st.pop();
            }
            else 
                cout << "-1" << '\n';
        }
        else if (s == "size")        
            cout << st.size() << '\n';
        else if (s == "empty") {    
            if (st.empty()) 
                cout << "1" << '\n';            
            else 
                cout << "0" << '\n';           
        }
        else if (s == "top") {     
            if (!st.empty()) 
                cout << st.top() << '\n';           
            else 
                cout << "-1" << '\n';            
        }
    }
}