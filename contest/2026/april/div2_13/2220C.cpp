#include <bits/stdc++.h>
using namespace std;

void solve() {
    int p, q; cin >> p >> q;
    int n = -1, m = -1;
    int total = 2 * q + p; 
    for(int i = 1; i < 100000; i++) {
        if((total - i) < (2 * i + 1)) break;
        if((total - i) % (2 * i + 1)) continue;
        n = i, m = (total - i) / (2 * i + 1);
        if(p < abs(n - m)) n = -1, m - 1;
        else break;
    }
    if(n == -1) cout << -1 << endl;
    else cout << n << " " << m << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}