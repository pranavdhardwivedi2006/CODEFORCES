#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll coral(ll h, vector<int>& coral) {
    ll x = 0;
    for(auto it : coral) if(it < h) x += h - it;
    return x;
}

void solve() {
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll l = *min_element(a.begin(), a.end()); 
    ll r = 1e12;
    while(l <= r) {
        ll h = (l + r) >> 1;
        ll k = coral(h, a);
        if(k <= x) l = h + 1;
        else r = h - 1;
    }
    cout << r << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
