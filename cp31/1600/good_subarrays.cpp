#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    unordered_map<int, long long> mpp;
    long long ans = 0, sum = 0; mpp[0] = 1;
    for(int i = 0; i < n; i++) {
        sum += s[i] - '0';
        ans += mpp[sum-i-1]++;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}