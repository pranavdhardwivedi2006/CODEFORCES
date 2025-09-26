#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, i = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    long long ans = 0;
    while(i < n) {
        int k = log2(a[i]);
        int cnt = 0;
        while(i < n && (int)log2(a[i]) == k) i++,cnt++;
        ans += 1LL * cnt * (cnt - 1) / 2;
    }
    cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
