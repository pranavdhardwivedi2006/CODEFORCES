#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int win = n, looser = 0, ans = 0;
    while(win > 1 || looser > 1) {
        ans += win / 2;
        ans += looser / 2;
        int k = 0, x = 0;
        if(win % 2 == 1) k = 1;
        if(looser % 2 == 1) x = 1;
        looser /= 2;
        looser += win / 2 + x;
        win /= 2;
        win += k;
    }
    cout << ans + 1 << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}