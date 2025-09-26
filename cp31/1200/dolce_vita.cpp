#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll find(ll d, ll x, ll k) {
    ll l = 0, r = 1e9;
    while(l < r) {
        ll mid = (l + r) / 2;
        if(mid * d + x <= k) l = mid + 1;
        else r = mid;
    }
    return r;
}

void solve() {
    int n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = 1; i < n; i++) a[i] += a[i - 1];
    int x = 0, i = n - 1;
    ll ans = 0;
    while(i >= 0) {
        ll y = find(i + 1, a[i] + 1LL * x * (i + 1), k);
        ans += y * (i + 1);
        x += y;
        i--; 
    }
    cout << ans << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();

}