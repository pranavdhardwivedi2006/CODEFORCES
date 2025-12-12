#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n, ans = 0; cin >> n;
    string s; cin >> s; int i = 0;
    while(i < n) {
        int cnt = 0;
        while(s[i%n] == '0') cnt++, i++;
        ans = max(ans, cnt); i++;
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
