#include <bits/stdc++.h>
using namespace std;

void rec(vector<int>& a, int n, int m) {
    int k = log2(m);
    int l = pow(2, k) - 1;
    int r = pow(2, k);
    while(r <= m) {
        a[l] = r;
        a[r] = l;
        l--, r++;
    }
    if(l > 0) rec(a, 0, l);
}

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(m+1, 0);
    if(m == 0) {
        cout << 0 << endl;
        cout << 0 << endl;
        return ;
    }
    rec(a, n, m);
    long long ans = 0;
    for(int i = 0; i <= m; i++) ans += (i | a[i]);
    cout << ans << endl;
    for(auto& it : a) cout << it << " ";
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}