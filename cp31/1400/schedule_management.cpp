#include <bits/stdc++.h>
using namespace std;

long long find(int h, int n, vector<int>& a) {
    long long k = 0;
    for(int i = 1; i <= n; i++) {
        if(a[i] <= h) k += 1LL * (h - a[i]) / 2;
        else k -= 1LL * (a[i] - h);
    }
    return k;
}

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n + 1, 0);
    for(int i = 0; i < m; i++) {
        int k; cin >> k;
        a[k]++;
    }
    int l = 1, r = m;
    while(l <= r) {
        int mid = (l + r) / 2;
        long long k = find(mid, n, a);
        if(k < 0) l = mid + 1;
        else r = mid - 1;
    }
    cout << l << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();
	
}
