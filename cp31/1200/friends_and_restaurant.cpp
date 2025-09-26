#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++) b[i] -= a[i];
    sort(b.begin(), b.end());
    int l = 0, r = n - 1;
    int ans = 0;
    while(l < r) {
        if(1LL * b[l] + b[r] >= 0) {
            ans++;
            r--;
        }
        l++;
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}