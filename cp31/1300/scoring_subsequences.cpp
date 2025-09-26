#include<bits/stdc++.h>
using namespace std;    

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0, r = 0, k;
    while(r < n) {
        while(a[l] / (r - l + 1) < 1) l++;
        cout << r - l + 1 << " ";
        r++;
    }
    cout << endl;
}

int main() {
    int t;  
    cin >> t;
    while(t--) {
        solve();
    }   

}