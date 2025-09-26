#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,x,y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    map<pair<int, int>, int> mpp;
    long long ans = 0;
    for(auto it : a) {
        int m = it % x;
        int o = it % y;
        int p = (x - m) % x;
        ans += mpp[{p, o}];
        mpp[{m, o}]++;
    }
    cout << ans << endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) solve();

}