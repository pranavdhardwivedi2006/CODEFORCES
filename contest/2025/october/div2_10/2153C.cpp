#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    map<int, int, greater<int>> mpp; for(auto& it : a) mpp[it]++;
    vector<int> curr, single; long long ans = 0;
    for(auto [u, v] : mpp) {
        if(v & 1) single.push_back(u), v--;
        ans += 1LL * u * v;
        for(int i = 0; i < v; i++) curr.push_back(u);
    }
    long long maxi = 0;
    if(curr.size() > 2) maxi = ans;
    sort(single.begin(), single.end());
    n = single.size();
    for(int i = 0; i < n; i++) {
        if(ans > single[i]) maxi = max(maxi, ans + single[i]);
        if(i < n - 1 && ans + single[i] > single[i+1]) {
            maxi = max(maxi, ans + single[i] + single[i+1]);
        }
    }
    cout << maxi << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}
