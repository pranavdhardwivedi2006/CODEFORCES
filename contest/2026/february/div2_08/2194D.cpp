#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> r(n, vector<int>(m));
    vector<vector<int>> d(n, vector<int>(m));
    for(auto& it : a) for(auto& x : it) cin >> x;
    for(int i = 0; i < n; i++) {
        int k = 0;
        for(int j = m - 1; j >= 0; j--) {
            r[i][j] = k += a[i][j];
        }
    }
    for(int i = 0; i < m; i++) {
        int k = 0;
        for(int j = n - 1; j >= 0; j--) {
            d[j][i] = k += a[j][i];
        }
    }
    string ans; int i = 0, j = 0, x = 0, y = 0;
    while(i < n && j < m) {
        if(x + r[i][j] <= y + d[i][j]) {
            x += r[i++][j];
            ans += 'D';
        }
        else {
            y += d[i][j++];
            ans += 'R';
        }
        if(i == n) while(j < m) ans += 'R', j++;
        if(j == m) while(i < n) ans += 'D', i++;
    }
    cout << 1LL * x * y << endl << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
