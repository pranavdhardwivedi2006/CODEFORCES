#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n,k,a,b;
    cin >> n >> k >> a >> b;
    vector<vector<ll>> arr(n, vector<ll>(2, 0));
    for(int i = 0; i < n; i++) cin >> arr[i][0] >> arr[i][1];
    ll x1 = arr[a-1][0], y1 = arr[a-1][1];
    ll x2 = arr[b-1][0], y2 = arr[b-1][1];
    ll min1 = 1e17, min2 = 1e17;
    for(int it = 0; it < k; it++) {
        min1 = min(min1, abs(arr[it][0]-x1) + abs(arr[it][1]-y1));
        min2 = min(min2, abs(arr[it][0]-x2) + abs(arr[it][1]-y2));
    }
    ll ans = min(min1 + min2, abs(x2-x1) + abs(y2-y1));
    cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}