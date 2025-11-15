#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    long long low = 0, diff = 0;
    long long curr = 0, prev = 0;
    for(int i = 1; i <= n; i++) {
        int k; cin >> k;
        curr += k;
        low = max(low, i - 1LL * i * i + prev);
        diff = max(diff, 1LL * i * i + i - curr + low);
        prev = curr;
    }
    cout << curr + diff << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
