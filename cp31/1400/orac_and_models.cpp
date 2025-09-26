#include <bits/stdc++.h>
using namespace std;

int rec(int index, int num, vector<int>& arr, vector<int>& dp) {
    int n = arr.size();
    if(dp[index-1] != -1) return dp[index-1];
    int maxi = 0;
    for(int i = 2; i * index <= n; i++) {
        if(arr[i*index-1] <= num) continue; 
        int k = rec(i * index, arr[i*index-1], arr, dp);
        maxi = max(maxi, k);
    }
    return dp[index-1] = 1 + maxi;
}

void solve() {
    int n; cin >> n;
    vector<int> arr(n); for(auto& it : arr) cin >> it;
    vector<int> dp(n, -1); int ans = 0;
    for(int i = n - 1; i >= 0; i--) {
        ans = max(ans, rec(i + 1, arr[i], arr, dp));
    }
    cout << ans << endl;
}
 
int main() {
	int t; cin >> t;
	while(t--) solve();

}
