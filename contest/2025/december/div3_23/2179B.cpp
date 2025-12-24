#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    vector<int> trk;
    for(int i = 1; i < n; i++) {
        trk.push_back(abs(a[i] - a[i-1]));
    }
    int maxi = max(trk[0], trk.back());
    long long ans = trk[0];
    for(int i = 1; i < trk.size(); i++) {
        maxi = max(maxi, trk[i] + trk[i-1] - abs(a[i-1] - a[i+1]));
        ans += trk[i];
    }
    ans -= maxi;
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();
}
