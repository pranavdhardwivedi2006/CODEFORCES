#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n, ans = 0; cin >> n;
    vector<int> a(n), vis(n);
    for(auto& it : a) cin >> it;
    for(int i = 0; i < n; i++) {
        if(vis[i]) continue ;
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j] && !vis[j]) {
                ans++;
                vis[j] = 1;
            }
        }
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
