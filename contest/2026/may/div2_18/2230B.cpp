#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int n = s.size();
    vector<int> o(n + 1), t(n + 1);
    int one = 0, two = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '2') two++;
        t[i+1] = two;
    }
    for(int i = n - 1; i >= 0; i--) {
        if(s[i] == '1' || s[i] == '3') one++;
        o[i] = one;
    }
    int ans = 0;
    for(int i = 0; i <= n; i++) {
        ans = max(ans, t[i] + o[i]);
    }
    cout << n - ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}