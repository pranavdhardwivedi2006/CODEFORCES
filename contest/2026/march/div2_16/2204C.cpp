#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

ll find(ll a, ll b, ll c, ll m) {
    ll ans = m / a * 6;
    ll ab = lcm(a, b);
    ll ac = lcm(a, c);
    ans -= (m / ab + m / ac) * 3;
    ll abc = lcm(ab, ac);
    ans += m / abc * 2;
    return ans;
}

void solve() {
    ll a, b, c, m; cin >> a >> b >> c >> m;
    cout << find(a, b, c, m) << " ";
    cout << find(b, a, c, m) << " ";
    cout << find(c, b, a, m) << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}