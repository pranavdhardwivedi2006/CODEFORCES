#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n); int maxi = 0;
    for(auto& it : a) cin >> it;
    int l = 0, r = 1e9;
    while(l <= r) {
        int mid = l + (r - l) / 2;
        bool poss = false;
        for(int i = 0; i < n; i++) {
            if(a[i] >= mid) {poss = true; break;}
            int p = mid, prev = a[i]; ll op = p-- - a[i];
            for(int j = i + 1; j < n; j++) {
                if(a[j] >= prev && a[j] >= p) {poss = true; break;}
                op += p-- - a[j]; prev = a[j];
            }
            if(poss && op <= k) break;
            poss = false;
        }
        if(poss) l = mid + 1;
        else r = mid - 1;
    }
    cout << r << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}