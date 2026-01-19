#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
map<int, pair<int, int>> mpp;

void solve() {
    int n, m, h; cin >> n >> m >> h;
    vector<int> a(n); mpp.clear();
    for(auto& it : a) cin >> it;
    int last = -1;
    for(int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        int k = a[u-1];
        if(mpp.find(u) == mpp.end()) {
            mpp[u] = {i, v};
            k += v;
        }
        else {
            if(mpp[u].first <= last) {
                mpp[u] = {i, v};
                k += v;
            }
            else {
                mpp[u] = {i, mpp[u].second + v};
                k += mpp[u].second;
            }
        }
        if(k > h) last = i;
    }
    for(auto it : mpp) {
        auto [u, v] = it;
        auto [x, y] = v;
        if(last < x) a[u-1] += y;
    }
    for(auto it : a) cout << it << " ";
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}