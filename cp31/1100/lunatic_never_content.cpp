#include <bits/stdc++.h>
using namespace std;

int calc(vector<int>& ans) {
    int gcd = ans[0];
    // for(auto it : ans) gcd = std::gcd(gcd, it);
    return gcd;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), ans;
    for(int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = n - 1;
    while(l < r) {
        int k = abs(a[r] - a[l]);
        if(k) ans.push_back(k);
        l++,r--;
    }
    sort(ans.begin(), ans.end());
    if(ans.empty()) cout << 0 << endl;
    else cout << calc(ans) << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();

}
