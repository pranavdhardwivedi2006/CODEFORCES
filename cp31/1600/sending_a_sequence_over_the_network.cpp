#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n, k; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    vector<bool> dp(n + 2, false);
    dp[0] = true;
    for(int i = 1; i <= n; i++) {
        int k = a[i-1];
        if(i > k && dp[i-k-1]) dp[i] = true;
        if(dp[i-1] && i + k <= n) dp[i+k] = true;
    }
    dp[n] ? yes : no;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}