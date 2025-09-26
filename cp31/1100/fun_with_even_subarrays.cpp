#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++) cin >> a[i];
    reverse(a.begin(), a.end());
    int k = a[0], x = 0, ans = 0;
    while(x < n) {
        while(x < n && a[x] == k) x++;
        if(x >= n) break;
        ans++;
        x *= 2;
    }
    cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}