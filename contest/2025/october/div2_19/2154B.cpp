#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    int maxi = 0;
    for(int i = 0; i < n; i++) {
        maxi = max(maxi, a[i]);
        if(i & 1) a[i] = maxi;
    }
    long long ans = 0;
    for(int i = 0; i < n; i += 2) {
        int x = INT_MAX, y = INT_MAX;
        if(i) x = a[i-1]; 
        if(i < n - 1) y = a[i+1];
        int mini = min(x, y);
        if(a[i] >= mini) ans += a[i] - mini + 1;
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();
}
