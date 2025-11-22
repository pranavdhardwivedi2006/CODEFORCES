#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it; long long sum = 0;
    if(a[0] == -1 && a[n-1] == -1) a[0] = a[n-1] = 0;
    else if(a[0] == -1 || a[n-1] == -1) a[0] = a[n-1] = max(a[0], a[n-1]);
    for(int i = 1; i < n - 1; i++) if(a[i] == -1) a[i] = 0;
    for(int i = 1; i < n; i++) sum += a[i] - a[i-1];
    cout << abs(sum) << endl;
    for(auto& it : a) cout << it << " ";
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();
}
