#include <bits/stdc++.h>
using namespace std;
map<pair<int, int>, long long> dp;

long long rec(int idx, int k, int z, vector<int>& arr) {
    if(idx >= arr.size() || k < 0) return 0;
    auto it = make_pair(idx, k);
    if(dp.count(it)) return dp[it];
    long long ans = 0;
    if(z && idx) ans = arr[idx] + rec(idx - 1, k - 1, z - 1, arr);
    ans = max(ans, arr[idx] + rec(idx + 1, k - 1, z, arr));
    return dp[it] = ans;
}

void solve() {
    int n, k, z; cin >> n >> k >> z;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    dp.clear();
    cout << rec(0, k, z, a) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}