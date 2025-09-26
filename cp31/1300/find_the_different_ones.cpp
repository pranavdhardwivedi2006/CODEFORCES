#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,q;
    cin >> n;
    vector<int> a(n), trk(n);
    for(auto& it : a) cin >> it;
    int k = -1;
    trk[0] = -1;
    for(int i = 1; i < n; i++) {
        if(a[i] != a[i-1]) k = i + 1;
        trk[i] = k;
    }
    cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;
        if(trk[l-1] == trk[r-1]) cout << -1 << " " << -1 << endl;
        else cout << trk[r-1] - 1 << " " << trk[r-1] << endl;
    }
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) solve();

}