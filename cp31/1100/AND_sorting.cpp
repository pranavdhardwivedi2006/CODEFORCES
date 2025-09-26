#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,i;
    cin >> n;
    vector<int> a(n, 0);
    for(i = 0; i < n; i++) cin >> a[i];
    for(i = 0; i < n; i++) if(i != a[i]) break;
    int ans = a[i];
    for(int j = i; j < n; j++) {
        if(a[j] != j) ans &= a[j];
    }
    cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}
