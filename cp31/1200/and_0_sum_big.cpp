#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    long long ans = 1;
    for(int i = 1; i <= k; i++) ans = (ans * n) % (int)(1e9 + 7);
    cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
