#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> merge(vector<pair<int, int>>& intervals) {
    vector<pair<int, int>> res;
    sort(intervals.begin(), intervals.end());
    int n = intervals.size();
    for (int i = 0; i < n; i++) {
        if (res.empty() || res.back().second < intervals[i].first) {
            res.push_back(intervals[i]);
        } else {
            res.back().second = max(res.back().second, intervals[i].second);
        }
    }
    return res;
}

void solve() {
    int n,m,x; cin >> n >> x >> m;
    vector<pair<int, int>> intervals;
    intervals.push_back({x, x});
    while(m--) {
        int l, r; cin >> l >> r;
        if(x >= l && x <= r) {
            intervals.push_back({l, r});
        }
        else {
            bool flag = false;
            // for(auto [u, v] : intervals) {
            //     if((u <= l && v >= l) || (u <= r && v >= r)) {
            //         flag = true;
            //         break;
            //     }
            // }
            if(flag) intervals.push_back({l, r});
        }
    }
    intervals = merge(intervals);
    int ans = 0;
    // for(auto [u, v] : intervals) ans += v - u + 1;
    std::cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
