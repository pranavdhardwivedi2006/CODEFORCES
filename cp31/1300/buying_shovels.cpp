#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    if(k >= n) {
        cout << 1 << endl;
        return ;
    }
    int ans = n;
    for(int i = 2; i <= k && 1LL * i * i <= n; i++) {
        if(n % i == 0) {
            if(n / i <= k) {
                cout << i << endl;
                return ;
            }
            ans = n / i;
        }
    }
    cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
