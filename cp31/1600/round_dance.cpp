#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

class DisjointSet{
vector<int> par, size;
public:
    DisjointSet(int n) {
        par.resize(n);
        size.resize(n, 1);
        for(int i = 0; i < n; i++) par[i] = i;
    }

    int findpar(int node) {
        if(node == par[node]) return node; 
        return par[node] = findpar(par[node]);
    }

    void ubs(int u, int v) {
        int up = findpar(u);
        int vp = findpar(v);
        if(up == vp) return ;
        if(size[up] < size[vp]) swap(up, vp);
        par[vp] = up;
        size[up] += size[vp];
    }
};

void solve() {
    int n, k; cin >> n;
    int cycle = 0, par = 0;
    DisjointSet dsu(n);
    set<pair<int, int>> st;
    for(int i = 0; i < n; i++) {
        cin >> k; k--;
        st.insert({min(i, k), max(i, k)});
    }
    for(auto& [u, v] : st) {
        int up1 = dsu.findpar(u);
        int up2 = dsu.findpar(v);
        if(up1 == up2) cycle++;
        else dsu.ubs(u, v);
    }
    for(int i = 0; i < n; i++) {
        if(i == dsu.findpar(i)) par++;
    }
    cout << (par == cycle ? par : cycle + 1) << " " << par << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}