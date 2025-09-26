#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cin >> a[i][j];
    }
    int l = 0, r = n - 1, cnt = 0;
    while(l <= r) {
        int st = 0, end = n - 1;
        if(l == r) {
            while(st < n / 2) {
                if(a[l][st] != a[l][n-st-1]) cnt++;
                st++;
            }
        }
        else {
            while(st < n) {
                if(a[l][st++] != a[r][end--]) cnt++;
            }
        }
        l++,r--;
    }
    k -= cnt;
    if(k < 0 || ((k & 1) && !(n & 1))) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
