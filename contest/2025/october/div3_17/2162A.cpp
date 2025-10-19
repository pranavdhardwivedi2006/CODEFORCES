#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += a[j];
            ans = max(ans, sum / (j - i +  1));
        }
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}