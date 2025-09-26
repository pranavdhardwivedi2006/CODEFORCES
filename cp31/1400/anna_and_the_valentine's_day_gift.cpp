#include <bits/stdc++.h>
using namespace std;

pair<int, int> find(int n) {
    int k = n;
    int cnt = 0;
    while(k % 10 == 0) {
        cnt++;
        k /= 10;
    }
    return {cnt, log10(n) + 1};
}

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    vector<pair<int, int>> arr;
    for(auto it : a) arr.push_back(find(it));
    sort(arr.begin(), arr.end(), greater<>());
    int ans = 0;
    for(int i = 0; i < n; i++) {
        // auto [u, v] = arr[i];
        // if(i % 2) ans += v;
        // else ans += v - u;
    }
    if(ans > m) cout << "Sasha" << endl;
    else cout << "Anna" << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    
}
