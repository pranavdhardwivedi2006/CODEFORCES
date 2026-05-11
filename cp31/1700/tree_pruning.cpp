#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> down, up;

int calcUp(int par, int node, int height) {
    int maxi = height;
    for(auto it : adj[node]) {
        if(it == par) continue ;
        maxi = max(maxi, calcUp(node, it, height + 1));
    }
    up[maxi+1]++;
    return maxi;
}

int calcDown(int par, int node, int height) {
    int siz = 0;
    for(auto it : adj[node]) {
        if(par == it) continue ;
        siz += calcDown(node, it, height + 1);
    }
    down[height] += siz;
    return siz + 1;
}

void solve() {
    int n; cin >> n;
    adj.assign(n + 1, {});
    for(int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    down.assign(n, 0); calcDown(0, 1, 0);
    up.assign(n + 1, 0); calcUp(0, 1, 0);
    for(int i = 1; i <= n; i++) up[i] += up[i-1];
    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        ans = min(ans, up[i] + down[i]);
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();

}