#include<bits/stdc++.h>
using namespace std;   

void solve() {
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        a[k%m]++;
    }
    int ans = 0;
    if(a[0] > 0) ans++;
    int l = 1, r = m - 1;
    while(l <= r) {
        if(!(a[l] == 0 && a[r] == 0)) {
            ans++;
            int k = abs(a[r] - a[l]);
            if(k > 0) ans += (k - 1);
        }
        l++, r--;
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();

}