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

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    map<pair<int, int>, int> mpp;
    for(auto& it : a) cin >> it;
    int ans = 0, zeroes = 0, already = 0;
    for(int i = 0; i < n; i++) {
        int b; cin >> b;
        if(b == 0 && a[i] == 0) {already++; continue;}
        if(b == 0) {zeroes++; continue;}
        if(a[i] == 0) continue;
        int sign = 1;
        if(a[i] < 0) sign *= -1; 
        if(b < 0) sign *= -1; 
        a[i] = abs(a[i]); b = abs(b);
        int gc = gcd(a[i], b);
        a[i] /= gc; b /= gc;
        ans = max(ans, ++mpp[{sign * a[i], b}]);
    }
    cout << max(ans, zeroes) + already << endl;
}

int main() {
	solve();

}