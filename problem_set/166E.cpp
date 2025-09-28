#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int dp[4] = {0, 0, 0, 1}, temp[4];
    for(int i = 1; i <= n; i++) {
        long long total = (1LL * dp[0] + dp[1] + dp[2] + dp[3]) % MOD;
        for(int j = 0; j < 4; j++) temp[j] = (total - dp[j] + MOD) % MOD;
        memcpy(dp, temp, sizeof(dp));
    }
    cout << dp[3] << endl;
    
}
