#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007
vector<vector<int>> b;
vector<vector<long long>> dp;

long long find(int idx, int idx2, int n) {
    if(idx >= n - 1) return 0;
    if(dp[idx][idx2-1] != -1) return dp[idx][idx2-1];
    long long dist = b[idx+1][0] - b[idx][0] + abs(b[idx][1] - b[idx][2]), ans;
    if(idx2 == 1) {
        ans = dist + abs(b[idx][2] - b[idx+1][1]) + find(idx + 1, 1, n);
        dist += abs(b[idx][2] - b[idx+1][2]) + find(idx + 1, 2, n);
    }
    else {
        ans = dist + abs(b[idx][1] - b[idx+1][1]) + find(idx + 1, 1, n);
        dist += abs(b[idx][1] - b[idx+1][2]) + find(idx + 1, 2, n);
    }
    return dp[idx][idx2-1] = min(ans, dist);
}

void solve() {
    int n, ax, bx, ay, by; 
    cin >> n >> ax >> ay >> bx >> by;
    vector<vector<int>> a(n, vector<int>(2));
    for(auto& it : a) cin >> it[0];
    for(auto& it : a) cin >> it[1];
    sort(a.begin(), a.end()); b.clear(); 
    {
        b.push_back({ax, ay, ay});
        for(int i = 0; i < n; i++) {
            if(b.back()[0] == a[i][0]) {
                b.back()[1] = min(b.back()[1], a[i][1]);
                b.back()[2] = max(b.back()[2], a[i][1]);
            }
            else {
                b.push_back({a[i][0], a[i][1], a[i][1]});
            }
        } 
        b.push_back({bx, by, by}); 
    }
    dp.clear(); n = b.size(); 
    dp.resize(n, vector<long long>(2, -1));
    cout << find(0, 1, n) << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
