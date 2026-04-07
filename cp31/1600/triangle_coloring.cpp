#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 998244353
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

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
    vector<array<int, 3>> a(n / 3);
    for(auto& it : a) {
        cin >> it[0] >> it[1] >> it[2];
        sort(it.begin(), it.end());
    }
    ll num = fact(n / 3), den = fact(n / 6);
    den = den * den % MOD;
    ll comb = num * power(den, MOD - 2) % MOD;
    for(auto& it : a) {
        int cnt = 1, maxi = it[1] + it[2];
        if(it[0] + it[1] == maxi) cnt++;
        if(it[0] + it[2] == maxi) cnt++;
        comb = comb * cnt % MOD;
    }
    cout << comb << endl;
}

int main() {
	solve();

}