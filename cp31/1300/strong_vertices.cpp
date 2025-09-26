#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];    
    map<long long, set<int>, greater<>> mp;
    for (int i = 0; i < n; i++) mp[1LL * a[i] - b[i]].insert(i + 1);
    auto it = *(mp.begin());
    cout << it.second.size() << endl;
    for(auto x : it.second) cout << x << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();

}