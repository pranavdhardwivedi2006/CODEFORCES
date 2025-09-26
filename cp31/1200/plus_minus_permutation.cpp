#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gc(ll a, ll b) {
    if(b == 0) return a;
    return gc(b, a % b);
}

long long lc(ll a, ll b) {
    return (a * b) / gc(a, b);
}

void solve() {
    ll n,x,y;
    cin >> n >> x >> y;
    ll k = n / lc(x, y);
    ll nx = n / x, ny = n / y;
    nx -= k;
    ny -= k;
    ll sum2 = ny * (ny + 1) / 2;
    ll sum = n * (n + 1) / 2;
    sum -= (n - nx) * (n - nx + 1) / 2;
    cout << sum - sum2 << endl;
    
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
