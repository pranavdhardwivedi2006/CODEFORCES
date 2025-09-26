#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it; 
    long long prev = 0, curr = 0, cnt = 0, ans = 0;
    for(int i = n - 1; i >= 0; i--) {
        if(a[i] > 0) {
            cnt++;
            ans += curr;
        }
        else {
            int k = cnt + prev + 1;
            prev = curr; curr = k;
            cnt = 0; ans += curr;
        }
    }
    cout << ans << " " << 1LL * n * (n + 1) / 2 - ans << endl;
}

int main() {
	solve();
 
}
