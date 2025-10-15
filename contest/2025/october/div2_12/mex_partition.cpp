#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n+1, 0);
    for(int i = 0; i < n; i++) {
        int k; cin >> k;
        a[k] = 1;
    }
    for(int i = 0; i <= n; i++) {
        if(a[i] == 0) {
            cout << i << endl;
            return ;
        } 
    }
    cout << n << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}