#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int ans = 0;
    if(n & 1) {
        cout << 0 << endl;
        return ;
    }
    for(int i = 0; i <= n; i += 4) {
        ans++;
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();
}
