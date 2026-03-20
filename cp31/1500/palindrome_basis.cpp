#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long
int dp[40001][498];
int pal[498];

bool check(int n) {
    string s = to_string(n);
    int l = 0, r = s.size() - 1;
    while(l <= r) {
        if(s[l++] != s[r--]) return false;
    }
    return true;
}

ll rec(int idx, int curr) {
    if(curr == 0) return 1;
    if(idx < 0) return 0;
    if(dp[curr][idx] != -1) return dp[curr][idx];
    ll take = 0, leave = rec(idx - 1, curr);
    if(pal[idx] <= curr) take = rec(idx, curr - pal[idx]);
    return dp[curr][idx] = (take + leave) % MOD;
}

void solve() {
    int n; cin >> n;
    cout << rec(497, n) << endl;
}

int main() {
    int j = 0;
    for(int i = 1; i < 40001; i++) {
        if(i && check(i)) pal[j++] = i;
        for(int j = 0; j < 498; j++) dp[i][j] = -1;
    }
	int t; cin >> t;
	while(t--) solve();

}