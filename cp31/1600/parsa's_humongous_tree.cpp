#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll rec(int node, int par, vector<array<int, 2>>& limit, vector<array<ll, 2>>& dp, vector<vector<int>>& adj) {
    for(auto& it : adj[node]) {
        if(it == par) continue;
        rec(it, node, limit, dp, adj);
        dp[node][0] += max(
            abs(1LL * limit[node][0] - limit[it][0]) + dp[it][0],
            abs(1LL * limit[node][0] - limit[it][1]) + dp[it][1]
        );
        dp[node][1] += max(
            abs(1LL * limit[node][1] - limit[it][0]) + dp[it][0],
            abs(1LL * limit[node][1] - limit[it][1]) + dp[it][1]
        );
    }
    return max(dp[node][0], dp[node][1]);
}

void solve() {
    int n; cin >> n;
    vector<array<int, 2>> limits(n + 1, {0, 0});
    for(int i = 1; i <= n; i++) cin >> limits[i][0] >> limits[i][1];
    vector<vector<int>> adj(n + 1);
    for(int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<array<ll, 2>> dp(n + 1, {0, 0});
    cout << rec(1, 0, limits, dp, adj) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();

}