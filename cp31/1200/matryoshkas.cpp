#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<long, int> mpp;
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        mpp[k]++;
    }
    int ans = 0;
    vector<pair<int, int>> trk;
    for(auto it : mpp) trk.push_back(it);
    int i = 0, k = trk.size();
    while(i < k) {
        int cnt = trk[i].second;
        while(i < k - 1 && trk[i].first  + 1 == trk[i + 1].first) {
            i++;
            if(trk[i].second < cnt) {
                ans += cnt - trk[i].second;
            }
            cnt = trk[i].second;
        }
        i++;
        ans += cnt;
    }
    cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
