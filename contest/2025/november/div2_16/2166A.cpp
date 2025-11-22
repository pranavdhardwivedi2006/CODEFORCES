#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    for(int i = n - 2; i >= 0; i--) {
        if(s[i] != s[i+1]) {
            s[i] = s[i+1];
            ans++;
        }
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}