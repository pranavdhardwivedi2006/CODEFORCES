#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> ans;
    for(int i = 0; i < n; i++) if(s[i] == '1') ans.push_back(i + 1);
    cout << ans.size() << endl;
    for(auto& it : ans) cout << it << " "; cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}