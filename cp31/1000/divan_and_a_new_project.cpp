#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<int>& a) {
    vector<int> temp(n), trk = a, idx(n);
    int l = 0, r = 0;
    for(int i = 0; i < n;) {
        temp[i++] = ++r;
        if(i >= n) break;
        temp[i++] = --l;
    }
    for (int i = 0; i < idx.size(); ++i) idx[i] = i;
    sort(idx.begin(), idx.end(), [&trk](int i, int j) {
        return trk[i] > trk[j];
    });
    vector<int> ans(n);
    for (int i : idx) ans[idx[i]] = temp[i];
    long long time = 0;
    for(int i = 0; i < n; i++) time += 1LL * 2 * a[i] * abs(ans[i]);
    cout << time << endl << 0 << " ";
    for(auto it : ans) cout << it << " ";
    cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        solve(n, a);
	}
}
