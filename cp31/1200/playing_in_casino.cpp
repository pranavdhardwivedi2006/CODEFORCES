#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    long long res = 0;
    for(int i = 0; i < m; i++) {
        vector<int> ans(n, 0);
        for(int j = 0; j < n; j++) ans[j] = a[j][i];
        sort(ans.begin(), ans.end());
        int l = 0, r = n - 1;
        while(l < r) res += 1LL * (r - l) * (ans[r--] - ans[l++]);
    }
    cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
