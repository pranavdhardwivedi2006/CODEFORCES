#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(m), trk(n+2);
    for(auto& it : a) cin >> it;
    for(auto& it : a) trk[it+1]--;
    int buff = m;
    for(auto& it : trk) it = buff += it;
    int l = 1, r = n - 1; long long ans = 0;
    while(l <= r) {
        ans += 2LL * trk[r] * (trk[l] - 1);
        if(l == r) ans -= 1LL * trk[r] * (trk[r] - 1);
        l++, r--;
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
