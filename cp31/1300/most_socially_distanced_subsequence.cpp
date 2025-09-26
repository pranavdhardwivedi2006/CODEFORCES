#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), ans;
    for(auto& it : a) cin >> it;
    int i = 1;
    ans.push_back(a[0]);
    while(i < n) {
        if(a[i] > ans.back()) {
            while(i < n && a[i] > a[i-1]) i++;
            ans.push_back(a[i-1]);
        }
        else {
            while(i < n && a[i] < a[i-1]) i++;
            ans.push_back(a[i-1]);
        }
    }
    cout << ans.size() << endl;
    for(auto it : ans) cout << it << " ";
    cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
