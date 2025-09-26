#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int cnt = 0;
	    string s;
	    cin >> s;
	    stack<char> st;
	    for(auto c : s) {
	        if(st.empty()) st.push(c);
	        else if((st.top() == '0' && c == '1') || (st.top() == '1' && c == '0')) {
	            cnt++;
	            st.pop();
	        }
	        else st.push(c);
	    }
	    if(cnt & 1) cout << "DA" << endl;
	    else cout << "NET" << endl;
	}

}