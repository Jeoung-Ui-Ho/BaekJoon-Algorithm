#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	ios::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);
    stack<char> st;
    string s;
    int n;
    cin >> n;
    cin.ignore();
    while (n--) {        
        getline(cin, s);
        s += ' ';
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
                cout << s[i];
            }
            else 
                st.push(s[i]);
        }
    }
}