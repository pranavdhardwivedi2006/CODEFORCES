#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k; cin >> n >> k;
    vector<int> a(n); for(auto& it : a) cin >> it;
    int i = 0, ans = 0; k++;
    while(i + k <= n) {
        bool flag = true;
        int j = i;
        while(i < j + k - 1) {
            if(a[i] >= 2 * a[i+1]) {
                flag = false;
                break;
            }
            i++;
        }
        if(flag) {
            ans++;
            while(i < n - 1) {
                if(a[i] >= 2 * a[i+1]) break;
                ans++, i++;
            }
        }
        i++;
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
