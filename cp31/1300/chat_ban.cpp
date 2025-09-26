#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll find(ll k, ll mid) {
    if(mid <= k) return mid * (mid + 1) / 2;
    else {
        mid = 2 * k - 1 - mid;
        return k * k - mid * (mid + 1) / 2;
    }
}

void solve() {
    ll k,x; cin >> k >> x;
    ll l = 0, r = 2 * k - 1;
    while(l <= r) {
        ll mid = l + (r - l) / 2;
        ll n = find(k, mid);
        if(n <= x) l = mid + 1;
        else r = mid - 1;
    }
    if(find(k, r) < x && r < 2 * k - 1) r++; 
    cout << r << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();
	
}
