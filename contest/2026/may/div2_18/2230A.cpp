#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, a, b; cin >> n >> a >> b;
    if(a * 3 <= b) cout << n * a << endl;
    else {
        ll ans = (n / 3) * b;
        n %= 3;
        ans += min(b, n * a);
        cout << ans << endl;
    }
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}