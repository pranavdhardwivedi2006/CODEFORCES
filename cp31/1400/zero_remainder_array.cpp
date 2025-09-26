#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int rem = a[i] % k;
        if(rem) mp[k - rem]++;
    }
    long long ans = 0;
    for(auto it : mp) {
        int u = it.first, v = it.second;
        long long req = 1LL * k * (v - 1) + u + 1;
        ans = max(ans, req);
    }
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();

}