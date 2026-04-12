#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n;
    vector<int> x(n), t(n);
    for(auto& it : x) cin >> it;
    for(auto& it : t) cin >> it;
    long double l = 0, r = 5e8;
    while(r - l > 1e-6) {
        long double mid1 = l + (r - l) / 3;
        long double mid2 = r - (r - l) / 3;
        long double val1 = 0, val2 = 0;
        for(int i = 0; i < n; i++) {
            val1 = max(val1, abs(x[i] - mid1) + t[i]);
            val2 = max(val2, abs(x[i] - mid2) + t[i]);
        }
        if(val1 < val2) r = mid2;
        else l = mid1;
    }
    cout << fixed << setprecision(6) << l << "\n";
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}