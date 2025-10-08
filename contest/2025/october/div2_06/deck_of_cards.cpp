#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, x = 0; cin >> n >> k;
    string s, ans(n, ' '); cin >> s;
    int l = 0, r = n - 1;
    for(int i = 0; i < k; i++) {
        if(s[i] == '0') ans[l++] = '-';
        if(s[i] == '1') ans[r--] = '-';
        if(s[i] == '2') x++;
    }
    if(x >= r - l + 1) for(int i = l; i <= r; i++) ans[i] = '-';
    else {
        for(int i = 0; i < x; i++) ans[l++] = '?';
        for(int i = 0; i < x; i++) ans[r--] = '?';
        for(int i = 0; i < n; i++) if(ans[i] == ' ') ans[i] = '+';
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}