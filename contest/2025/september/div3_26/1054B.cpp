#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> a(n);
    for(auto& it : a) cin >> it;
    sort(a.begin(), a.end());
    long long maxi = 0;
    for(int i = 0; i < n; i += 2) maxi = max(maxi, a[i+1] - a[i]);
    cout << maxi << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
