#include<bits/stdc++.h>
using namespace std;

class DisjointSet {
    vector<int> parent, rank;
public:
    DisjointSet(int n) {
        rank.resize(n+1, 0);
        parent.resize(n+1);
        for (int i = 0; i <= n; i++) parent[i] = i;
    }

    int findUPar(int node) {
        if(node == parent[node]) return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v) {
        int up = findUPar(u);
        int vp = findUPar(v);
        if (up == vp) return ;
        if(rank[up] < rank[vp]) {
            parent[up] = vp;
        }
        else if(rank[up] > rank[vp]) {
            parent[vp] = up;
        }
        else {
            parent[vp] = up;
            rank[up]++;
        }
    }
};

bool dfs(vector<bool>& vis, vector<vector<int>>& adj, int x, int par) {
    if(vis[x]) return true; vis[x] = true;
    if(adj[x].size() != 2) return false;
    bool flag = true;
    for(auto& it : adj[x]) if(it != par) flag &= dfs(vis, adj, it, x);
    return flag;
}

int main() {
	int n, m; cin >> n >> m;
	vector<vector<int>> adj(n + 1);
	DisjointSet ds(n);
	for(int i = 0; i < m; i++) {
	    int u, v; cin >> u >> v;
	    adj[u].push_back(v);
	    adj[v].push_back(u);
	    ds.unionByRank(u, v);
	} 
	vector<bool> vis(n + 1, false);
	int ans = 0;
	for(int i = 1; i <= n; i++) {
	    int k = ds.findUPar(i);
	    if(k == i || vis[k]) continue;
	    if(dfs(vis, adj, k, -1)) ans++;
	}
	cout << ans << endl;
}
