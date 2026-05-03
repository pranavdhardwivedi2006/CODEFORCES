#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    if(n > m) {
        cout << 0 << endl;
        return ;
    }
    long long ans = 1;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            ans = ans * abs(a[i] - a[j]) % m;
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}