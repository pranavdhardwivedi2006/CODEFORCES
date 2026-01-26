#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n, s, x, curr = 0; cin >> n >> s >> x;
    for(int i = 0; i < n; i++) {
        int k; cin >> k; curr += k;
    }
    if(s >= curr && (s - curr) % x == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
