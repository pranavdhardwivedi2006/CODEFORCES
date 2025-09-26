#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long ans = (n * (4 * n - 1)) % 1000000007;
    ans = (ans * (n + 1)) % 1000000007;
    ans = (ans * 337) % 1000000007;
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();

}