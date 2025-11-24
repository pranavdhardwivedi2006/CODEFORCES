#include<bits/stdc++.h>
using namespace std;

class DisjointSet {
    vector<int> parent, rank;
public:
    DisjointSet(int n) {
        rank.resize(n, 0);
        parent.resize(n);
        for (int i = 0; i < n; i++) parent[i] = i;
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

int n, k; vector<bool> vis;

void dfs(DisjointSet& ds, int idx) {
    if(vis[idx]) return ;
    vis[idx] = true;
    if(n - idx - 1 >= 0) {
        ds.unionByRank(idx, n - idx - 1);
        dfs(ds, n - idx - 1);
    }
    if(idx + k < n) {
        ds.unionByRank(idx, idx + k);
        dfs(ds, idx + k);
    }
}

void solve() {
    string s; cin >> n >> k >> s;
    int ans = 0; vis.assign(n, false);
    DisjointSet ds(n); 
    for(int i = 0; i < n; i++) dfs(ds, i);
    map<int, array<int, 26>> mpp;
    for(int i = 0; i < n; i++) {
        int p = ds.findUPar(i);
        if(mpp.find(p) == mpp.end()) mpp[p].fill(0);
        mpp[p][s[i]-'a']++;
    }
    for(auto& [u, v] : mpp) {
        int maxi = 0, sum = 0;
        for(auto& x : v) {
            maxi = max(maxi, x);
            sum += x;
        }
        ans += sum - maxi;
    }
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();

}
