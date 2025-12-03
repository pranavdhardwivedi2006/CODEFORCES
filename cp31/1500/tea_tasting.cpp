#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> a(n), b(n), ans(n+1), buff(n+1);
    for(auto& it : a) cin >> it;
    for(auto& it : b) cin >> it;
    for(int i = 1; i < n; i++) b[i] += b[i-1];
    for(int i = 0; i < n; i++) {
        int l = i, r = n - 1;
        long long k = i ? b[i-1] : 0;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            long long p = b[mid] - k;
            if(a[i] >= p) l = mid + 1;
            else r = mid - 1;
        }
        ans[r+1] += a[i] - (r >= 0 ? b[r] : 0) + k;
        if(r >= i) buff[i]++, buff[r+1]--;
    } 
    long long k = 0, prev = 0;
    for(int i = 0; i < n; i++) buff[i] = k += buff[i];
    for(int i = 0; i < n; i++) {
        ans[i] += buff[i] * (b[i] - prev);
        prev = b[i];
    }
    for(int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
