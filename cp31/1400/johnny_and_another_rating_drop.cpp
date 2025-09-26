#include<bits/stdc++.h> 
using namespace std;
using ll = long long;

void solve() {
    ll n; cin >> n;
    ll k = n + 1, x = 1, ans = 0;
    while(n) {
        ans += k / x;
        if(k % x == 0) ans--;
        x = x << 1; 
        n = n >> 1;
    }
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}
