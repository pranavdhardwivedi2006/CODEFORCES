#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<pair<int, int>> a(m);
    for(int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        if(u <= v) a[i] = {u, v};
        else a[i] = {v, u};
    }
    sort(a.begin(), a.end(), greater<>());
    int l = n, r = n, i = 0;
    long long ans = 0;
    while(l > 0) {
        ans += r - l + 1;
        l--;
        while(i < m && l == a[i].first) {
            if(r >= a[i].second) r = a[i].second - 1;
            i++;
        } 
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
