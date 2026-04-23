#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
vector<vector<array<int, 2>>> dp;

int rec(int wall, bool dir, int n, int age) {
    if(wall < 0 || wall >= n || age == 1) return 0;
    if(dp[wall][age][dir] != -1) return dp[wall][age][dir];
    int ans = 0;
    if(dir) {
        ans = 1 + rec(wall - 1, !dir, n, age - 1);
        ans = (ans + rec(wall + 1, dir, n, age)) % MOD;
    } else {
        ans = 1 + rec(wall + 1, !dir, n, age - 1);
        ans = (ans + rec(wall - 1, dir, n, age)) % MOD;
    }
    return dp[wall][age][dir] = ans;
}

void solve() {
    int n, k; cin >> n >> k;
    dp.assign(n, vector<array<int, 2>>(k + 1, {-1, -1}));
    cout << rec(0, 1, n, k) + 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();

}