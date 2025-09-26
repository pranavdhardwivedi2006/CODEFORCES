#include <bits/stdc++.h>
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

int main() {
	int n, m; cin >> n >> m;
    DisjointSet ds(n + 1);
    while(m--) {
        int k; cin >> k; 
        int prev, curr;
        for(int i = 0; i < k; i++) {
            if(i) {
                cin >> curr;
                ds.unionByRank(prev, curr);
            } 
            else cin >> prev;
        }
    }
    vector<int> trk(n+1);
    for(int i = 0; i <= n; i++) trk[ds.findUPar(i)]++;
    for(int i = 1; i <= n; i++) cout << trk[ds.findUPar(i)] << " ";
    cout << endl;
}
