#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin >> n;
    vector<ll> a(n);
    for(auto& it : a) cin >> it;
    sort(a.begin(), a.end());
    ll one = 0, ans = 0;
    for(auto it : a) {
        if(it == 1) {one++; continue;}
        int x = min(one, (it - 2) / 2);
        if(one == n - 1) {
            ans = it + min(it / 2, one); 
            break;
        }
        ans += it + x;
        one -= x;
    }
    if(ans < 3) ans = 0;
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}