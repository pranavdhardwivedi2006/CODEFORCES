#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void take(vector<int>& a, int n) {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int p; cin >> p;
        if(p) cnt++;
        else if(cnt) {a.push_back(cnt); cnt = 0;}
        else cnt = 0;
    }
    if(cnt) a.push_back(cnt);
    sort(a.begin(), a.end());
}

ll find(int n, int k, vector<int>& b, vector<int>& factors) {
    long long prev = 0, ans = 0;
    for(int i = 0; i < b.size(); i++) {
        if(i && b[i] == b[i-1]) {ans += prev; continue;}
        prev = 0;
        for(auto& it : factors) {
            ll p = it, q = k / it;
            if(p <= n && q <= b[i]) {
                prev += (n - p + 1) * (b[i] - q + 1);
            }
            if(p == q) continue;
            if(p <= b[i] && q <= n) {
                prev += (n - q + 1) * (b[i] - p + 1);
            }
        }
        ans += prev;
    }
    return ans;
}

void solve() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> a, b, factors;
    take(a, n); take(b, m);
    int x = a.empty() ? 0 : a.back();
    vector<ll> dp(x + 1, -1);
    for(int i = 1; i * i <= k; i++) {
        if(k % i == 0) factors.push_back(i);
    }
    ll ans = 0;
    for(auto& it : a) {
        if(dp[it] != -1) ans += dp[it];
        else ans += dp[it] = find(it, k, b, factors);
    }
    cout << ans << endl;
}

int main() {
	solve();

}