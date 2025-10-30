#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long r, x, d, n, k; cin >> r >> x >> d >> n;
    string s; cin >> s; int ans = 0;
    for(auto it : s) {
        if(it == '1') {
            r = max(r - d, 0LL);
            ans++;
        }
        else {
            if(r < x) {
                r = max(r - d, 0LL);
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}