#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    vector<long long> arr;
    long long x = 2;
    for(int i = 3; x * i <= n; i++) {
        x *= i;
        arr.push_back(x);
    } 
    int ans = __builtin_popcountll(n);
    for(int i = 0; i < (1 << arr.size()); i++) {
        long long sum = 0; int cnt = 0;
        for(int j = 0; j < arr.size(); j++) {
            if(i & (1 << j)) sum += arr[j], cnt++;
        }
        if(sum <= n) ans = min(ans, __builtin_popcountll(n - sum) + cnt);
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int t; cin >> t;
    while(t--) solve();

}