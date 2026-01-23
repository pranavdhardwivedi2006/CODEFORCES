#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n; cin >> n;
    long long x; cin >> x;
    long long y = 0;
    long long maxi = -1e9;
    for(int i = 0; i < n; i++) {
        long long a, b, c; 
        cin >> a >> b >> c;
        y += (b - 1) * a;
        maxi = max(maxi, a * b - c);
    }
    if(y >= x) cout << 0 << endl;
    else if(maxi <= 0) cout << -1 << endl;
    else {
        long long ans = (x - y) / maxi;
        if((x - y) % maxi) ans++;
        cout << ans << endl;
    }
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
