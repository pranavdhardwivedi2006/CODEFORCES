#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long
int ans = 0;

int dfs(int node, int par, vector<vector<int>>& adj) {
    int cnt = 1;
    for(auto& it : adj[node]) {
        if(it == par) continue;
        cnt += dfs(it, node, adj);
    }
    if(cnt % 2 == 0) ans++, cnt = 0;
    return cnt & 1;
}

void solve() {
    int n, k; cin >> n;
    vector<vector<int>> adj(n + 1);
    for(int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(n & 1) cout << -1 << endl;
    else {dfs(1, -1, adj); cout << ans - 1 << endl;}
}

int main() {
	solve();

}