#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> univ(n);
    vector<vector<long long>> arr(n+1);
    for(auto& it : univ) cin >> it;
    for(int i = 0; i < n; i++) {
        int s; cin >> s;
        arr[univ[i]].push_back(s);
    }
    vector<long long> ans(n+1, 0);
    for(auto& it : arr) {
        sort(it.begin(), it.end(), greater<long long>());
        for(int i = 1; i < it.size(); i++) {
            it[i] += it[i-1];
        }
        for(int i = 1; i <= n; i++) {
            if(i > it.size()) break;
            int k = it.size() / i;
            int index = k * i - 1;
            ans[i] += it[index];
        }
    }
    for(int i = 1; i <= n; i++) cout << ans[i] << " ";
    cout << endl;
    
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
