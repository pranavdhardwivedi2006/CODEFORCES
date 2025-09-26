#include<bits/stdc++.h> 
using namespace std;

int calc(char c, string &s, int n) {
    int l = 0, r = n - 1, ans = 0;
    while (l < r) {
        if(s[l] == s[r]) l++, r--;
        else if(s[l] == c) l++, ans++;
        else if(s[r] == c) r--, ans++;
        else return -1; 
    }
    return ans; 
}

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int l = 0, r = n - 1;
    while (l < r && s[l] == s[r]) l++,r--;
    if(l >= r) cout << 0 << endl;
    else {
        l = calc(s[l], s, n);
        r = calc(s[r], s, n);
        if(l == -1 && r == -1) cout << -1 << endl;
        else if(l == -1) cout << r << endl;
        else if(r == -1) cout << l << endl;
        else cout << min(l, r) << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
        
}