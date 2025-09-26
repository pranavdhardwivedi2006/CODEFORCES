#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n), diff;
    for(auto& it : a) cin >> it;
    if(k >= n) {
        cout << n << endl;
        return ;
    }
    for(int i = 0; i < n - 1; i++) {
        diff.push_back(a[i+1] - a[i]);
    }
    sort(diff.begin(), diff.end());
    map<int, int> mp;
    for(int i = 0; i < n - k; i++) mp[diff[i]]++;
    int l = 0, ans = 0;
    for(int i = 0; i < n - 1; i++) {
        int dif = a[i+1] - a[i];
        if(mp.find(dif) != mp.end()) {
            if(mp[dif] == 1) mp.erase(dif);
            else mp[dif]--;
        }
        else {
            ans += a[i] - a[l] + 1;
            l = i + 1;
        }
        if(i == n - 2 && l <= i + 1) ans += a[i+1] - a[l] + 1;
    }
    cout << ans << endl;
}

int main() {
	solve();
}
