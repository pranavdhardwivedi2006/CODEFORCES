#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int l, a, b; cin >> l >> a >> b;
    vector<int> vis(l);
    int ans = a;
    while(1) {
        ans = max(a, ans);
        if(vis[a]) break;
        vis[a] = 1;
        a = (a + b) % l;
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
