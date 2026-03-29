#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

class DisjointSet{
public:
    vector<int> par, size;
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


int power(int x, int y) {
    if(y == 0) return 1;
    long long mult = power(x, y / 2);
    mult = mult * mult % MOD;
    if(y & 1) mult = mult * x % MOD;
    return mult;
}


void solve() {
    int n, k; cin >> n >> k;
    DisjointSet ds(n);
    for(int i = 0; i < n; i++) {
        int u, v, c;
        cin >> u >> v >> c;  
        if(c == 0) ds.ubs(u - 1, v - 1);
    }
    long long ans = 0;  
    for(int i = 0; i < n; i++) {
        if(i == ds.findpar(i)) {
           ans += power(ds.size[i], k);
           ans %= MOD;
        }
    }
    ans = (MOD + power(n, k) - ans) % MOD;
    cout << ans << endl;
}

int main() {
	solve();

}