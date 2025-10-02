#include <bits/stdc++.h>

using namespace std;

void find(const vector<int>& a, int k, vector<int>& f, vector<int>& la) {
    int n = a.size();
    if (n == 0) return;
    map<int, int> mpp;
    int i = 0;
    for(int j = 0; j < n; ++j) {
        mpp[a[j]]++;
        while (mpp.size() == k) {
            f[i] = j + 1; mpp[a[i]]--;
            if(mpp[a[i]] == 0) mpp.erase(a[i]);
            i++;
        }
    }
    while(i < n) f[i++] = -1;
    mpp.clear(); int j = 0;
    for (i = 0; i < n; ++i) {
        while (j < n && (mpp.size() < k || (mpp.size() == k && mpp.count(a[j]))))  mpp[a[j++]]++;
        la[i] = j; mpp[a[i]]--;
        if(mpp[a[i]] == 0) mpp.erase(a[i]);
    }
}

void solve() {
    int n, k, l, r; cin >> n >> k >> l >> r;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    vector<int> f(n), la(n);
    find(a, k, f, la);
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        if (f[i] != -1) {
            int c1 = l + i;
            int c2 = r + i;
            long long d1 = max(1LL * c1, 1LL * f[i]);
            long long d2 = min(1LL * c2, 1LL * la[i]);
            if (d1 <= d2) ans += d2 - d1 + 1;
        }
    }
    cout << ans << endl;
}
    
int main() {
    int t; cin >> t;
    while (t--) solve();
        
}