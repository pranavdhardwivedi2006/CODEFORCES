#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

void solve() {
    int n, m; cin >> n >> m;
    vector<ll> a(n), b(m);
    for(auto& it : a) cin >> it;
    for(auto& it : b) cin >> it;
    sort(a.begin(), a.end());
    ll gcd = 0;
    for(int i = 1; i < n; i++) {
        gcd = std::gcd(gcd, a[i] - a[i-1]);
    }
    for(auto& it : b) {
        cout << std::gcd(a[0] + it, gcd) << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}