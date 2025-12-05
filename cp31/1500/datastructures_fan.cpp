#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), pre(n+1); 
    for(auto& it : a) cin >> it;
    string s; cin >> s;
    int xor0 = 0, xor1 = 0;
    for(int i = 0; i < n; i++) {
        pre[i+1] = pre[i] ^ a[i];
        if(s[i] == '0') xor0 ^= a[i];
        else xor1 ^= a[i];
    }
    int q; cin >> q;
    while(q--) {
        int k; cin >> k;
        if(k == 1) {
            int l, r; cin >> l >> r;
            int x = pre[r] ^ pre[l-1];
            xor0 ^= x;
            xor1 ^= x;
        } 
        else {
            int g; cin >> g;
            cout << (g ? xor1 : xor0) << " ";
        }
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    
}