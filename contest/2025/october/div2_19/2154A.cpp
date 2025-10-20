#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int last = -k, ans = 0;
    for(int i = 0; i < n; i++) {
        if(last <= i - k && s[i] == '1') {
            ans++;
            last = i;
        }
        else if(last > i - k && s[i] == '1') {
            last = i;
        }
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();
}
