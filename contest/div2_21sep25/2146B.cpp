#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> trk(m+1);
    for(int i = 1; i <= n; i++) {
        int k; cin >> k;
        while(k--) {
            int x; cin >> x;
            trk[x].push_back(i);
        }
    }
    set<int> st;
    for(int i = 1; i <= m; i++) {
        if(!trk[i].size()) {
            cout << "NO" << endl;
            return ;
        }
        if(trk[i].size() == 1) st.insert(trk[i][0]);
    }
    if(n - st.size() >= 2) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}