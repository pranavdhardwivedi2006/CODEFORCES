#include <bits/stdc++.h>
using namespace std;

vector<int> find(int n) {
    vector<int> trk;
    while(n) {
        trk.push_back(n & 1);
        n >>= 1;
    }
    return trk;
}

void solve() {
    int a, b; cin >> a >> b;
    vector<int> ta = find(a);
    vector<int> tb = find(b);
    if(ta.size() < tb.size()) {
        cout << -1 << endl;
        return ;
    }
    for(int i = tb.size(); i < ta.size(); i++) tb.push_back(0);
    vector<int> ans;
    for(int i = 0; i < ta.size(); i++) if(ta[i] != tb[i]) ans.push_back(1 << i);
    cout << ans.size() << endl;
    for(auto& it : ans) cout << it << " "; cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}