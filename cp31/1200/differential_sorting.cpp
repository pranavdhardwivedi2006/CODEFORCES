#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    if(is_sorted(a.begin(), a.end())) cout << 0 << endl;
    else if(a[n-2] > a[n-1] || (a[n-2] - a[n-1]) > a[n-2]) cout << -1 << endl;
    else {
        cout << n - 2 << endl;
        for(int i = 1; i < n - 1; i++) {
            cout << i << " " << n - 1 << " " << n << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
    
}