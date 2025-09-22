#include <bits/stdc++.h>
using namespace std;

bool check(string& s) {
    int z = 0, i = 0, n = s.size();
    while(i < n) {
        while(i < n && s[i] == '0') z++, i++;
        if(z == 1) return true;
        if(i < n && s[i] == '1') z = 0, i++;
    }
    return false;
}

void solve() {
    int n, m; cin >> n;
    string s; cin >> s;
    if(check(s)) {
        cout << "NO" << endl;
        return ;
    } 
    vector<int> ans(n, 0);
    vector<int> trk;
    for(int i = 0; i < n; i++) if(s[i] == '1') trk.push_back(i);
    if(trk.empty()) for(int i = 0; i < n; i++) ans[i] = n - i;
    else {
        for(int i = 0; i < trk.size(); i++) {
            ans[trk[i]] = trk[i] + 1;
            int j = 0, k = trk[i]; 
            if(i > 0) j = trk[i-1] + 1;
            for(; j < trk[i]; j++) ans[j] = k--;
        }
        int k = trk.back(), p = n;
        for(int j = k + 1; j < n; j++) ans[j] = p--;
    }
    cout << "YES" << endl;
    for(auto it : ans) cout << it << " ";
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}