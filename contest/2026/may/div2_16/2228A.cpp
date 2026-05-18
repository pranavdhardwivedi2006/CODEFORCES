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

int power(int x, int y) {
    if(y == 0) return 1;
    long long mult = power(x, y / 2);
    mult = mult * mult % MOD;
    if(y & 1) mult = mult * x % MOD;
    return mult;
}

ll fact(ll n) {
    if(n <= 1) return 1;
    return n * fact(n - 1) % MOD;
}

void solve() {
    int n, k; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    int zero = 0, one = 0, two = 0;
    for(auto it : a) {
        if(it == 0) zero++;
        if(it == 1) one++;
        if(it == 2) two++;
    }
    int ans = zero;
    ans += min(one, two);
    ans += abs(one - two) / 3;
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}