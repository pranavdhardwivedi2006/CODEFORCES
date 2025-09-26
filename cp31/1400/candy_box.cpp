#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n + 1);
    for(int i = 0; i < n; i++) {
        int k; cin >> k; arr[k]++;
    }
    sort(arr.begin(), arr.end(), greater<int>());
    int k = arr[0], ans = 0;
    for(int i = 0; i < n; i++) {
        if(k < 0) break;
        ans += min(arr[i], k);
        k = min(arr[i], k) - 1;
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
