#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x,y;
    cin >> x >> y;
    vector<int> trk;
    for(int i = 0; i < 4; i++) {
        int k;
        cin >> k;
        vector<int> curr(k, 0);
        for(int  i = 0; i < k; i++) {
            cin >> curr[i];
        }
        sort(curr.begin(), curr.end());
        trk.push_back(curr.back() - curr[0]);
    }
    long long x_max = 1LL * max(trk[0], trk[1]) * y;
    long long y_max = 1LL * max(trk[2], trk[3]) * x;
    cout << max(x_max, y_max) << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}
