#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    sort(a.rbegin(), a.rend());
    for(int i = 1; i < n; i++) {
        if(a[i] == a[i-1]) {
            cout << -1 << endl;
            return ;
        }
    }
    for(auto& it : a) cout << it << " "; 
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}