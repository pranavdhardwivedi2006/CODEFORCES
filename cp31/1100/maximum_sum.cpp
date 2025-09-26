#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int l = 0, r = n - k;
    long long sum = 0;
    for(int i = 0; i < n - k; i++) sum += a[i];
    long long ans = sum;
    while(k--) {
        sum -= (a[l] + a[l+1]);
        sum += a[r++];
        ans = max(sum, ans);
        l += 2;
    }
    cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}