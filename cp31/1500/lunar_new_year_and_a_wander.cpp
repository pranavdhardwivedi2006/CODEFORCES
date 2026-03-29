#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    vector<bool> vis(n + 1);
    for(int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1);
    while(!pq.empty()) {
        int node = pq.top(); pq.pop();
        if(vis[node]) continue ;
        vis[node] = true;
        cout << node << " ";
        for(int nxt : adj[node]) {
            pq.push(nxt);
        }
    }
    cout << endl;
}

int main() {
	solve();

}