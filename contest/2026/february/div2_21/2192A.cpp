#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0, d = 0, i = 0;
    while(i < n) {
        char c = s[i]; ans++; int cnt = 0;
        while(i < n && c == s[i]) i++, cnt++;
        if(cnt > 1) d = 1;
    }
    if(d && s[0] != s[n-1]) ans++;
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}