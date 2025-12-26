#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> a(n), b(n); map<int, int, greater<int>> mp;
    for(auto& it : a) {cin >> it.first; it.second = it.first;}
    for(auto& it : b) {cin >> it.first; it.second = it.first;}
    int maxi = a[0].first, mini = a[0].first; 
    for(int i = 0; i < n; i++) {
        a[i].first = mini = min(mini, a[i].first);
        a[i].second = maxi = max(maxi, a[i].second);
    } mini = maxi = b[n-1].first;
    for(int i = n - 1; i >= 0; i--) {
        b[i].first = mini = min(mini, b[i].first);
        b[i].second = maxi = max(maxi, b[i].second);
    }
    for(int i = 0; i < n; i++) {
        mini = min({a[i].first, a[i].second, b[i].first, b[i].second}); 
        maxi = max({a[i].first, a[i].second, b[i].first, b[i].second}); 
        if(mp.find(mini) != mp.end()) mp[mini] = min(mp[mini], maxi);
        else mp[mini] = maxi;
    }
    int i = 2 * n; long long ans = maxi = 0;
    for(auto [u, v] : mp) {
        while(i > u) ans += maxi, i--;
        maxi = max(maxi, 2 * n - v + 1);
    }
    ans += 1LL * i * maxi; 
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}