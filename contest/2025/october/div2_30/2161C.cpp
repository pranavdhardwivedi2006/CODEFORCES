#include <bits/stdc++.h>
using namespace std;


void solve() {
    long long n, x; cin >> n >> x;
    vector<int> a(n), trk;
    for(auto& it : a) cin >> it;
    sort(a.begin(), a.end());
    int l = 0, r = n - 1; long long sum = 0, ans = 0;  
    while(l <= r) {
        while(l < r && sum + a[r] < x) {
            trk.push_back(a[l]);
            sum += a[l++];
        }
        if(sum + a[r] >= x) {
            sum = (sum + a[r]) % x;
            ans += a[r];
        }
        trk.push_back(a[r]);
        r--;
    }
    cout << ans << endl;
    for(auto it : trk) cout << it << " ";
    cout << endl;
    
}

int main() {
	int t; cin >> t;
	while(t--) solve();
}
