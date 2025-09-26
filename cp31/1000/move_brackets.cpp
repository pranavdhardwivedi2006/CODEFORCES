#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    stack<char> st;
	    for(auto it : s) {
	        if(!st.empty() && st.top() == '(' && it == ')') st.pop();
	        else st.push(it);
	    }
	    cout << st.size() / 2 << endl;
	}

}
