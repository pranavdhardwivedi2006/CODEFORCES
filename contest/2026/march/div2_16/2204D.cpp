#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long
set<int> st1, st2; bool is;

void rec(int node, int turn, vector<vector<int>>& adj, vector<bool>& vis) {
    turn ? st2.insert(node) : st1.insert(node);
    if(vis[node]) return ; vis[node] = true;
    for(auto& it : adj[node]) {
        rec(it, !turn, adj, vis);
    }
}


bool check() {
    for(auto& it : st1) {
        if(st2.find(it) != st2.end()) return false;
    }
    return true;
} 

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    vector<bool> vis(n + 1, 0);
    for(int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(vis[i]) continue;
        if(adj[i].empty()) ans++;
        else {
            st1.clear(); st2.clear();
            rec(i, 0, adj, vis); is = check();
            if(is) ans += max(st1.size(), st2.size());
        }
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}