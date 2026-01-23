#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n, h, l; cin >> n >> h >> l;
    if(h > l) swap(h, l);
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    sort(a.begin(), a.end());
    int l1 = 0, r1 = n - 1, ans = 0;
    while(l1 < r1) {
        if(a[l1] <= h && a[r1] <= l) {
            ans++;
            l1++, r1--;
        }
        else if(a[l1] > h) break;
        else if(a[r1] > l) r1--;
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
