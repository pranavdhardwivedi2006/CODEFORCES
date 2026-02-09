#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int i = 0, ans = 0;
    while(i < n) {
        int curr = 0;
        if(i) curr = -1;
        while(i < n && s[i] == '0') i++, curr++;
        if(i < n) curr -= 1;
        if(curr > 0) {
            ans += curr / 3;
            if(curr % 3) ans++;
        }
        i++;
    }
    for(auto& it : s) if(it == '1') ans++;
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
