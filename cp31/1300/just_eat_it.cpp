#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int r = 0;
    long long sum = 0, ans = 0, sum2 = 0;
    while(r < n) {
        if(r < n - 1) sum += a[r];
        if(r > 0) sum2 += a[r];
        if(sum < 0) sum = 0;
        if(sum2 < 0) sum2 = 0;
        ans = max(ans, sum);
        ans = max(ans, sum2);
        r++;
    }
    sum = 0;
    for(auto it : a) sum += it;
    if(sum > ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}
