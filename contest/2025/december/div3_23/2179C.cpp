#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    sort(a.begin(), a.end());
    int k = a[1] - a[0];
    if(k <= a[0]) cout << a[0] << endl;
    else cout << k << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();
}