#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string s; cin >> s;
    ll pos, cnt = 0; cin >> pos;
    int n = s.size(), temp = s.size();
    while(pos > temp) pos -= temp--, cnt++;
    int i = 0;
    stack<char> st;
    while(i < n) {
        while(!st.empty() && cnt && st.top() > s[i]) {
            st.pop(); cnt--;
        }
        st.push(s[i++]);
    }
    while(cnt--) st.pop();
    while(st.size() > pos) st.pop();
    cout << st.top();
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}