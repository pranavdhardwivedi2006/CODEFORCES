#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int found = false, ans = 1, i = 0, n = s.size();
    string temp; int l = 0, r = n - 1;
    while(l < n && s[l] == '<') l++;
    while(r >= 0 && s[r] == '>') r--;
    for(int i = l; i <= r; i++) temp += s[i];
    if(temp.empty()) {
        cout << max(l, n - r - 1) << endl;
        return ;
    }
    set<char> st(temp.begin(), temp.end());
    for(int i = 0; i < temp.size() - 1; i++) {
        if(temp[i] == '*' && temp[i+1] == '*') found = true;
        else if(temp[i] == '>' && temp[i+1] == '<') found = true;
        else if(temp[i] == '*' && temp[i+1] == '<') found = true;
        else if(temp[i] == '>' && temp[i+1] == '*') found = true;
    }
    if(found) cout << -1 << endl;
    else {
        if(st.find('<') != st.end()) cout << l + temp.size() << endl;
        else if(st.find('<') != st.end()) cout << n - r - 1 + temp.size() << endl;
        else cout << max(l, n - r - 1) + 1 << endl;
    }
    
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
