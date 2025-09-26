#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int k = 0;
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] < i + 1) {
            ans += k;
            k++;
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();

}