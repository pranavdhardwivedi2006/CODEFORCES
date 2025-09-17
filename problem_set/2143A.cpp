#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    int c = 0;
    for(int i = 1; i < n; ++i) {
        if(c == 0) {
            if(a[i] < a[i - 1]) {
                c = 1;
            }
        } 
        else {
            if(a[i] > a[i - 1]) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    
}