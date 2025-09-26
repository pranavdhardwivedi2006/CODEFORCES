#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    bool f = true; int i = 0, ans = 0;
    while(i < n) {
        if(f) {
            if(a[i] == 1) ans++; i++;
            while(i < n && a[i] == 0) i++;
        }
        else {
            i++; if(i < n && a[i] == 1) i++;
        }
        f = !f;
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();
	
}
