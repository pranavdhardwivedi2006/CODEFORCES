#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long
vector<ll> dp[2024];

void calc() {
    ll curr = 1; dp[0] = {0};
    for(int i = 1; i < 2024; i++) {
        vector<ll> temp(i); ll sum = 0;
        for(auto& it : temp) {
            it = sum += curr * curr; 
            curr++;
        }
        dp[i] = temp;
    }
}

pair<int, int> get(int n) {
    int l = 0, r = 2023;
    while(l <= r) {
        int mid = (l + r) >> 1;
        if(mid * (mid + 1) / 2 >= n) r = mid - 1;
        else l = mid + 1;
    }
    l = n - r * (r + 1) / 2;
    return {r, l - 1};
}

void solve() {
    int n; cin >> n;
    auto [row, col] = get(n);
    int l = col - 1;
    ll ans = 1LL * n * n;
    while(row > 0) {
        l = max(l, 0); col = min(col, (int)dp[row].size() - 1);
        ans += dp[row][col] - (l ? dp[row][l-1] : 0);
        row--, l--;
    }
    cout << ans << endl;
}

int main() {
    calc();
	int t; cin >> t;
	while(t--) solve();

}