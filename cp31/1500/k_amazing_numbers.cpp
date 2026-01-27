#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> a(n + 1, {-1, 0});
    for(int i = 0; i < n; i++) {
        int k; cin >> k;
        if(a[k].first == -1) a[k] = {i + 1, i + 1};
        else a[k].second = max(a[k].second, i + 1 - a[k].first);
        a[k].first = i + 1;
    }
    vector<int> ans(n + 1, INT_MAX);
    for(int i = 1; i <= n; i++) {
        auto& [u, v] = a[i];
        if(u == -1) continue ;
        v = max(v, n + 1 - u);
        ans[v] = min(ans[v], i);
    }
    int prev = INT_MAX;
    for(int i = 1; i <= n; i++) {
        prev = ans[i] = min(ans[i], prev);
        if(prev == INT_MAX) ans[i] = -1;
    }
    for(int i = 1; i <= n; i++) cout << ans[i] << " ";
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
