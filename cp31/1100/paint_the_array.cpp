#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(vector<ll>& a, ll n, int i) {
    while(i < a.size()) {
        if(a[i] % n == 0) return false;
        i += 2;
    }
    return true;
}

ll solve() {
    int n;
    cin >> n;
    vector<ll> a(n, 0);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll odd = 0, even = 0;
    for(int i = 0; i < n; i++) {
        // if(i & 1) odd = gcd(odd, a[i]);
        // else even = gcd(even, a[i]);
    }
    if(check(a, even, 1)) return even;
    if(check(a, odd, 0)) return odd;
    return 0;
}

int main() {
	int t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
