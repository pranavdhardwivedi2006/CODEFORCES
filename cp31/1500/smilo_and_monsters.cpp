#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    sort(a.begin(), a.end());
    long long op = 0, x = 0;
    int l = 0, r = n - 1;
    while(l < r) {
        while(l < r && x < a[r]) x += a[l++];
        if(x >= a[r]) op += a[r] + 1, x -= a[r];
        else x += a[r];
        r--;
    }
    if(l == r) x += a[l];
    if(x > 0) {
        if(x == 1) op++;
        else if(x & 1) op += x / 2 + 2;
        else op += x / 2 + 1;
    }
    cout << op << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}