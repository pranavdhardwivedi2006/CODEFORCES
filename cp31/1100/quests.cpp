#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    int ans = 0, larger = 0, sum = 0;
    for(int i = 0; i < min(n, k); i++) {
        sum += a[i];
        larger = max(larger, b[i]);
        ans = max(ans, sum + larger * (k - i - 1));
    }
    cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
