#include <bits/stdc++.h>
using namespace std;

void check(string& s, vector<int>& a) {
    int n = s.size();
    stack<pair<char, int>> st;
    for(int i = 0; i < n; i++) {
        if(!st.empty() && st.top().first == '(' && s[i] == ')') {
            st.pop();
        }
        else st.push({s[i], i});
    }
    if(st.empty()) cout << 1 << endl;
    else {
        while(!st.empty()) {
            a[st.top().second] = 2;
            st.pop();
        }
        cout << 2 << endl;
    }
    for(auto it : a) cout << it << " ";
    cout << endl;
}

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0; for(auto it : s) if(it == '(') cnt++;
    if(cnt * 2 != n) {
        cout << -1 << endl;
        return ;
    }
    vector<int> a(n, 1); 
    if(s[0] == ')') {
        for(auto& it : s) {
            if(it == '(') it = ')';
            else it = '(';
        }
    }
    check(s, a);
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}