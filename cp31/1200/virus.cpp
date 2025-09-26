#include<bits/stdc++.h>
using namespace std;    

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];
    sort(a.begin(), a.end());
    vector<int> b;
    b.push_back(a[0] - 1 + n - a[m - 1]);
    for (int i = 1; i < m; i++) b.push_back(a[i] - a[i - 1] - 1);
    sort(b.begin(), b.end(), greater<int>());
    int ans = 0, k = 0;
    for (int i = 0; i < b.size(); i++) {
        b[i] -= 2 * k;
        if (b[i] <= 0) break;
        if(b[i] == 1) ans += 1;
        else ans += b[i] - 1;
        k += 2;
    }
    cout << n - ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    
}