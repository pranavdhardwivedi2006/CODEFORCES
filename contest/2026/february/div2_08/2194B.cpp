#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y; cin >> n >> x >> y;
    vector<int> a(n);
    long long ans = 0;
    for(auto& it : a) cin >> it;
    vector<long long> pre(n), suff(n);
    for(int i = 0; i < n; i++) pre[i] = suff[i] = a[i] / x * y;
    for(int i = 1; i < n; i++) pre[i] += pre[i-1];
    for(int i = n - 2; i >= 0; i--) suff[i] += suff[i+1];
    for(int i = 0; i < n; i++) {
        long long left = i ? pre[i-1] : 0;
        long long right = i + 1 < n ? suff[i+1] : 0;
        ans = max(ans, left + right + a[i]);
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
