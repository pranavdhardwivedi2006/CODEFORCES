#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        mpp[k] = i + 1;
    }
    int ans = -1;
    for(auto it : mpp) {
        for(auto x : mpp) {
            if(/*gcd(it.first, x.first) == */1) {
                ans = max(ans, it.second + x.second);
            }
        }
    }
    cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
