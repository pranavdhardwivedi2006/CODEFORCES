#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll board(ll w, ll c, vector<int>& board) {
    ll x = 0;
    for(auto it : board) {
        if(x > c) break;
        x += (it + w * 2) * (it + w * 2);
    }
    return x;
}

void solve() {
    int n;
    ll x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll l = 0; 
    ll r = 1e9;
    while(l <= r) {
        ll w = l + (r - l) / 2;
        ll k = board(w, x, a);
        if(k <= x) l = w + 1;
        else r = w - 1;
    }
    cout << r << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
