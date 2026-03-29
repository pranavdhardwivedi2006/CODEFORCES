#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n; cin >> n;
    vector<array<int, 3>> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
        a[i][2] = i;
    }
    sort(a.begin(), a.end());
    vector<int> ans(n);
    int prev = a[0][1]; 
    bool valid = false;
    for(int i = 0; i < n; i++) {
        if(a[i][0] > prev) {
            while(i < n) ans[a[i++][2]] = 2;
            valid = true;
        } else {
            ans[a[i][2]] = 1;
            prev = max(prev, a[i][1]);
        }
    }
    if(valid) for(auto& it : ans) cout << it << " ";
    else cout << -1 << " "; cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();

}