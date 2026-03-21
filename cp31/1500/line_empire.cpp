#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n, a, b; cin >> n >> a >> b;
    vector<int> arr(n);
    for(auto& it : arr) cin >> it;
    ll sum = 0; for(auto& it : arr) sum += it;
    ll ans = sum * b;
    for(int i = 0; i < n; i++) {
        ll curr = 1LL * arr[i] * (a + b);
        curr += (sum - 1LL * (n - i) * arr[i]) * b;
        sum -= arr[i]; ans = min(ans, curr);
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}