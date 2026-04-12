#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define ll long long

int rec(int node, vector<vector<int>>& adj, vector<bool>& vis) {
    if(vis[node]) return 0;
    vis[node] = true; int count = 1;
    for(auto it : adj[node]) {
        count += rec(it, adj, vis);
    }
    return count;
}

void solve() {
    int ans = true;
    int n, k; cin >> n;
    vector<vector<int>> adj(n + 1);
    for(int i = 0; i < n; i++) {
        int u, v; cin >> u >> v;
        if(u == v) ans = false;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> vis(n + 1, false);
    for(int i = 1; i <= n; i++) {
        if(adj[i].size() != 2) ans = false; 
        if(vis[i] || !ans) continue;
        int x = rec(i, adj, vis);
        if(x & 1) ans = false;
    }
    ans ? yes : no;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}