#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0, curr = 0;
    long long ans = 0;
    for(auto it : s) if(it == '*') cnt++;
    for(auto it : s) {
        if(it == '.') ans += min(curr, cnt - curr);
        else curr++;
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
