#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<vector<pair<int, int>>> adj(n);
    vector<bool> vis(n, false);
    for(int i = 0; i < n - 1; i++) {
        int u,v; cin >> u >> v;
        adj[u-1].push_back({v-1, i});
        adj[v-1].push_back({u-1, i});
    }
    int ans = 0;
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;
    pq.push({0, {0, n}});
    int maxi = 0;
    while(!pq.empty()) {
        // auto [t, it] = pq.top();
        // auto [u, i] = it;
        // pq.pop();
        // if(vis[u]) continue ; 
        // vis[u] = true;
        // maxi = max(maxi, t);
        // for(auto [x, y] : adj[u]) {
        //     if(vis[x]) continue ;
        //     if(y < i) pq.push({t + 1, {x, y}});
        //     else pq.push({t, {x, y}});
        // }
    }
    cout << maxi << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    
}
