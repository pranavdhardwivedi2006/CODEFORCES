#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    int xr = 0; bool ans = false;
    for(int i = 0; i < n; i++) {
        xr ^= a[i]; int x = 0;
        bool flag = false;
        for(int j = i + 1; j < n; j++) {
            if(x == xr) flag = true, x = 0;
            x ^= a[j];
        }
        if(flag && (x == 0 || x == xr)) ans = true;
        else if(x == xr) ans = true;
    }
    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
