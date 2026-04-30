#include <bits/stdc++.h>
using namespace std;

int rec(int node, int par, int height, vector<int>& ans, vector<vector<int>>& adj) {
    int sum = 0;
    for(auto& it : adj[node]) {
        if(it == par) continue;
        sum += rec(it, node, height + 1, ans, adj);
    }
    ans.push_back(height - sum);
    return sum + 1;
}

void solve() {
    int n, k; cin >> n >> k;
    vector<vector<int>> adj(n + 1);
    for(int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> ans;
    long long sum = 0;
    rec(1, -1, 0, ans, adj);
    sort(ans.rbegin(), ans.rend());
    for(int i = 0; i < k; i++) sum += ans[i];
    cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}