#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = 0, ans = -1, sum = 0;
    while(l < n && r < n) {
        while(r < n && sum + a[r] <= k) {
            sum += a[r++];
        }
        if(sum < k) break;
        ans = max(ans, r - l);
        while(l < n && sum >= k) sum -= a[l++];
    }
    ans = ans == -1 ? -1 : n - ans;
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();

}