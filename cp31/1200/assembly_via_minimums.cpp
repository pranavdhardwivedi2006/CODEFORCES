#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int k = n * (n - 1) / 2;
    vector<int> a(k);
    for(int i = 0; i < k; i++) cin >> a[i];
    sort(a.begin(), a.end());
    vector<int> ans(n);
    int i = 0, j = 0;
    while(i < k) {
        ans[j] = a[i];
        i += n - 1 - j++;
    }
    ans[n - 1] = ans[n - 2];
    for(int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();

}