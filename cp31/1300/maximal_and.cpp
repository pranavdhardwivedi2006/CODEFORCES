#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    long long ans = 0;
    vector<int> a(n, 0), trk(31, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < 31; i++) {
        for(auto& it : a) {
            if(it % 2 == 0) trk[i]++;
            it = it >> 1;
        }
    }
    for(int i = 30; i >= 0; i--) {
        if(trk[i] <= k) {
            ans = ans | (1 << i);
            k -= trk[i];
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();

}