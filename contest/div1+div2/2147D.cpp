#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> ve(n);
    for(int i = 0; i < n; i++) cin >> ve[i];
    sort(ve.begin(), ve.end());
    vector<pair<int, int>> trk;
    trk.push_back({ve[0], 0});
    for(auto& it : ve) {
        if(it == trk.back().first) trk.back().second++;
        else trk.push_back({it, 1});
    }
    for(auto& [u, v] : trk) swap(u, v);
    sort(trk.begin(), trk.end(), greater<>());
    bool al = true; long long a = 0, b = 0;
    for(int i = 0; i < trk.size(); i++) {
        auto [v, u] = trk[i];
        if(al) {
            a += 1LL * v * ((u + 1) / 2);
            b += 1LL * v * (u / 2);
        }
        else {
            a += 1LL * v * (u / 2);
            b += 1LL * v * ((u + 1) / 2);
        }
        if(u & 1) al = !al;
    }
    cout << a << " " << b << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}