#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, cnt = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) {
        int k = a[i-1];
        for(int j = 1; j <= 2 * n; j++) {
            int s = k * j;
            if(s - i > n) break;
            if(s - i <= i) continue;
            if(a[s-i-1] == j) cnt++;
        } 
    }
    cout << cnt << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();

}