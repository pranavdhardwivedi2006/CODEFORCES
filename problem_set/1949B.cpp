#include<bits/stdc++.h>
using namespace std;

int find(vector<int>& a, vector<int>& b, int idx, int n) {
    int ans = INT_MAX;
    for(int i = 0; i <= idx; i++) ans = min(ans, abs(a[i] - b[n - idx - 1 + i]));
    for(int i = idx + 1; i < n; i++) ans = min(ans, abs(a[i] - b[i - idx - 1]));
    return ans;
}

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 0;
    for(int i = 0; i < n; i++) ans = max(ans, find(a, b, i, n));
    cout << ans <<  endl;
 }

int main(){
    int t; cin >> t;
    while(t--) solve();
 }