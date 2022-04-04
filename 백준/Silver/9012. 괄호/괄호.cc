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
    bool ck = true;
    cin >> n;
    cin.ignore();
    while (n--) {        
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(')
                st.push(s[i]);
            else if(s[i]==')'){
                if (!st.empty())
                    st.pop();
                else {
                    ck = false;
                    break;
                }
            }
        } 
        if (st.empty() && ck)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        ck = true;
        while (!st.empty())
            st.pop();
    }
}