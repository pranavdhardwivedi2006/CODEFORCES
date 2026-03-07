#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n; cin >> n;
    ll h, k; cin >> h >> k;
    vector<ll> a(n), t(n), ma(n), mi(n);
    for(auto& it : a) cin >> it;
    ll sum = 0, mini = 1e9, maxi = 0;
    for(int i = 0; i < n; i++) {
        t[i] = sum += a[i];
        mi[i] = mini = min(mini, a[i]);
    }
    for(int i = n - 1; i >= 0; i--) {
        ma[i] = maxi = max(maxi, a[i]);
    }
    ll ans = h / sum * n;
    if(h / sum) {
        if(h % sum) ans += (h / sum) * k;
        else ans += (h / sum - 1) * k;
    }
    h %= sum; 
    if(!h) {cout << ans << endl; return ;}
    long long sec = n;
    for(int i = 0; i < n - 1; i++) {
        if(t[i] >= h) sec = min(sec, i + 1LL);
        else if(t[i] - mi[i] + ma[i+1] >= h) sec = min(sec, i + 1LL);
    }
    cout << ans + sec << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}