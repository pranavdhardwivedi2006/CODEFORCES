#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp; int n;
int M = 1e9 + 7;

long long rec(int num, int k) {
    if(k == 0) return 1; 
    if(k < 0 || num > n) return 0;
    if(dp[num][k] != -1) return dp[num][k];
    long long possibility = 0;
    for(int i = 1; i * num <= n; i++) {
        possibility = (possibility + rec(i * num, k - 1) % M) % M;
    }
    return dp[num][k] = possibility;
}
 
int main() {
	int k; cin >> n >> k; 
	dp.resize(n + 1, vector<int>(k + 1, -1));
	long long ans = 0;
	for(int i = 1; i <= n; i++) ans = (ans + rec(i, k - 1)) % M;
    cout << ans << endl;
}