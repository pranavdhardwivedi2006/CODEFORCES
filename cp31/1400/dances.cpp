#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto& it : a) cin >> it;
    for(auto& it : b) cin >> it;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int l = 0, r = 0, cnt = 0;
    while(l < n && r < n) {
        while(r < n && b[r] <= a[l]) r++, cnt++;
        l++, r++;
    }
    cout << cnt << endl;
}
 
int main() {
	int t; cin >> t;
	while(t--) solve();
	

}
