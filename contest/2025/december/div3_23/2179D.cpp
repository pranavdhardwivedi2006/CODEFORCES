#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> ans;
    for(int i = n - 1; i >= 0; i--) {
        for(int j = (1 << i) - 1; j >= 0; j--) {
            int k = (j << (n - i)) | ((1 << (n - i - 1)) - 1);
            ans.push_back(k);
        }
    }
    ans.push_back((1 << n) - 1);
    reverse(ans.begin(), ans.end());
    for(auto& it : ans) cout << it << " ";
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();
}