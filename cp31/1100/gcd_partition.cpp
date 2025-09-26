#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<ll> pre(n), post(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    pre[0] = a[0];
    post[n-1] = a[n-1];
    for(int i = 1; i < n; i++) {
        pre[i] = pre[i-1] + a[i];
        post[n-i-1] = post[n-i] + a[n-i-1];
    }
    ll ans = 0;
    for(int i = 0; i < n - 1; i++) {
        // ans = max(ans, gcd(pre[i], post[i+1]));
    }
    cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
