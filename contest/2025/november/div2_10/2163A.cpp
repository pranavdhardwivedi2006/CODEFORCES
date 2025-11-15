#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for(auto& it : arr) cin >> it;
    sort(arr.begin(), arr.end());
    bool s = true;
    for(int i = 0; i < n - 1; i++) {
        if((i & 1) && arr[i] != arr[i+1]) s = false; 
    }
    if(s) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}