#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long
int cost[1001];

void calc() {
    for(int i = 2; i < 1001; i++) cost[i] = 1e9;
    cost[0] = cost[1] = 0; cost[2] = 1;
    for(int i = 2; i < 1001; i++) {
        for(int j = 1; j <= i; j++) {
            int k = i + i / j;
            if(k < 1001) cost[k] = min(cost[k], cost[i] + 1);
        }
    }
}

int rec(int idx, int k, vector<int>& b, vector<int>& c, vector<vector<int>>& dp) {
    if(idx < 0) return 0;
    if(dp[idx][k] != -1) return dp[idx][k];
    int leave = rec(idx - 1, k, b, c, dp);
    int take = 0;
    if(k >= b[idx]) take = c[idx] + rec(idx - 1, k - b[idx], b, c, dp);
    return dp[idx][k] = max(take, leave);
}

void solve() {
    int n, k; cin >> n >> k;
    vector<int> b(n), c(n);
    for(auto& it : b) cin >> it;
    for(auto& it : c) cin >> it;
    for(int i = 0; i < n; i++) {
        b[i] = cost[b[i]];
    }
    k = min(k, n * 12);
    vector<vector<int>> dp(n, vector<int>(k + 1, -1));
    cout << rec(n - 1, k, b, c, dp) << endl;
}

int main() {
    calc();
	int t; cin >> t;
	while(t--) solve();

}