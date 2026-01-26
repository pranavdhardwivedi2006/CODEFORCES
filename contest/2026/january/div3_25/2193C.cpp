#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n, q; cin >> n >> q;
    vector<int> a(n), b(n);
    for(auto& it : a) cin >> it;
    for(auto& it : b) cin >> it;
    a[n-1] = max(a[n-1], b[n-1]);
    int i = n - 2; 
    while(i >= 0) {
        a[i] = max({a[i], b[i], a[i+1]});
        i--;
    }
    for(int i = 1; i < n; i++) a[i] += a[i-1];
    while(q--) {
        int l, r; cin >> l >> r; l--, r--;
        cout << a[r] - (l ? a[l-1] : 0) << " ";
    }
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
