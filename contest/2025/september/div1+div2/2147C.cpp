#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp;
int n;

bool rec(string& s, int idx, int prev) {
    if(idx == n - 1) return true;
    if(s[idx] == '1') {
        if(dp[idx][prev] != -1) return dp[idx][prev];
        return dp[idx][prev] = rec(s, idx + 1, prev); 
    }
    else {
        if(prev) {
            if(dp[idx][0] != -1) return dp[idx][0];
            return dp[idx][0] = rec(s, idx + 1, 0);
        }
        bool left = false, right = false;
        if(dp[idx][0] != -1) left = dp[idx][0];
        else if(idx == 0 || s[idx-1] == '0') {
            dp[idx][0] = left = rec(s, idx + 1, 0);
        }
        if(dp[idx][1] != -1) right = dp[idx][1];
        else {
            if(idx < n - 2) {
                if(s[idx+1] == '1') {
                    if(s[idx+2] == '1') right = false;
                    else right = dp[idx][1] = rec(s, idx + 1, 1);
                }
                else dp[idx][1] = right = rec(s, idx + 1, 0);
            }  
            else if(s[n-1] == '0') right = true;
        }
        return (left || right);
    }
}

void solve() {
    cin >> n;
    string s; cin >> s;
    dp.assign(n, vector<int>(2, -1));
    if(rec(s, 0, 0)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}