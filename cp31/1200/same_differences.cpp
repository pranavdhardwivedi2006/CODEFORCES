#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> mpp;
    for(int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        mpp[k-i]++;
    }
    long long ans = 0;
    for(auto it : mpp) ans += 1LL * it.second * (it.second - 1) / 2;
    cout << ans << endl;
}

int main() { 
	int t;
	cin >> t;
	while(t--) solve();

}
