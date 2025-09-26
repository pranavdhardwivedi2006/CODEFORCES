#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int j = 0;
    vector<int> trk;
    for(int i = 0; i < n; i++) {
        while(j < n && b[j] < a[i]) j++;
        trk.push_back(j);
    }
    long long ans = 1;
    for(int i = 0; i < n; i++) {
        ans = (ans * (trk[i] - i)) % 1000000007;
    }
    cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
