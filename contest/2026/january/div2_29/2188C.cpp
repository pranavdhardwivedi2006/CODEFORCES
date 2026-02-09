#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n), c;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    int mini = b[0], maxi = b[n-1];
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) c.push_back(a[i]);
    }
    sort(c.begin(), c.end());
    n = c.size(); 
    if(n == 0) cout << -1 << endl;
    else {
        int ans = INT_MAX;
        for(int i = 0; i < n; i++) {
            ans = min(ans, max(c[i] - mini, maxi - c[i]));
        }
        cout << ans << endl;
    }
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
