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

ll rec(int d1, int d2, ll a) {
    string s = to_string(a);
    int n = s.size();
    ll ans = abs(a - d1);
    if(n > 1) {
        string num1(n - 1, '0' + d2);
        ans = min(ans, abs(stoll(num1) - a));
    }
    string num1 = (d1 == 0) ? (to_string(d2) + string(n, '0')) : string(n + 1, '0' + d1);
    ans = min(ans, abs(stoll(num1) - a));
    string prev = "";
    for(int i = 0; i < n; i++) {
        ll x = 0, y = 0;
        if('0' + d1 != s[i]) {
            if('0' + d1 < s[i]) {
                num1 = prev + to_string(d1);
                num1 += string(n - i - 1, '0' + d2);
            } else {
                num1 = prev + to_string(d1);
                num1 += string(n - i - 1, '0' + d1);
            }
            ans = min(ans, abs(stoll(num1) - a));
        }
        if('0' + d2 != s[i]) {
            if('0' + d2 < s[i]) {
                num1 = prev + to_string(d2);
                num1 += string(n - i - 1, '0' + d2);
            } else {
                num1 = prev + to_string(d2);
                num1 += string(n - i - 1, '0' + d1);
            }
            ans = min(ans, abs(stoll(num1) - a));
        }
        if(s[i] != '0' + d1 && s[i] != '0' + d2) break;
        if(i == n - 1) return 0;
        prev += s[i];
    }
    return ans;
}

void solve() {
    int n; ll a; cin >> a >> n;
    int d1, d2; cin >> d1 >> d2;
    cout << rec(d1, d2, a) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}