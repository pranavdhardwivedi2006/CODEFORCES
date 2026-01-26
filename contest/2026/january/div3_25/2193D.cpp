#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    vector<long long> b(n);
    for(auto& it : a) cin >> it;
    for(auto& it : b) cin >> it;
    sort(a.begin(), a.end());
    for(int i = 1; i < n; i++) b[i] += b[i-1];
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        int cnt = n - i;
        if(i && a[i] == a[i-1]) continue ; 
        int l = 0, r = n - 1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(b[mid] <= cnt) l = mid + 1;
            else r = mid - 1;
        }
        ans = max(ans, 1LL * a[i] * (r + 1));
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
