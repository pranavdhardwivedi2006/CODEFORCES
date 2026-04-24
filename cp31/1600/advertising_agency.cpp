#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int power(int x, int y) {
    if(y == 0) return 1;
    long long mult = power(x, y / 2);
    mult = mult * mult % MOD;
    if(y & 1) mult = mult * x % MOD;
    return mult;
}

ll fact(ll n) {
    if(n <= 1) return 1;
    return n * fact(n - 1) % MOD;
}

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    sort(a.begin(), a.end(), greater<>());
    int num = a[k-1], cnt = 0; 
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(num == a[i]) {
            cnt++;
            if(!found) {
                found = true;
                k -= i;
            }
        }
    }
    ll numerator = fact(cnt);
    ll denominator = fact(k) * fact(cnt - k) % MOD;
    ll ans = numerator * power(denominator, MOD - 2) % MOD;
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();

}