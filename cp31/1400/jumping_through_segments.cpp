#include <bits/stdc++.h>
using namespace std;

bool check(int k, vector<pair<int, int>>& a) {
    int low = 0, up = 0;
    // for(auto [u, v] : a) {
    //     if(v < low) {
    //         if(low - k > v) return false;
    //         low = max(low - k, u);
    //         up = v;
    //     }
    //     else if(u > up) {
    //         if(up + k < u) return false;
    //         low = u;
    //         up = min(up + k, v);
    //     }
    //     else {
    //         if(low > u) low = max(low - k, u);
    //         else low = u;
    //         if(up < v) up = min(up + k, v);
    //         else up = v;
    //     }
    // }
    return true;
}

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> arr(n);
    for(auto& it : arr) {
        int u,v; cin >> u >> v;
        it = {u, v};
    }
    int l = 0, r = 1e9;
    while(l <= r) {
        int mid = l + (r - l) / 2;
        if(check(mid, arr)) r = mid - 1;
        else l = mid + 1;
    }
    cout << l << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    
}
