#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n, m; cin >> n >> m;
    vector<array<int, 2>> a(m);
    for(auto& it : a) cin >> it[0] >> it[1];
    int q; cin >> q; vector<int> queries(q);
    for(auto& it : queries) cin >> it;
    int l = 0, r = q - 1; bool poss = false;
    while(l <= r) {
        int mid = (l + r) / 2, prev = 0;
        vector<int> arr(n + 1, 0); bool curr = false;
        for(int i = 0; i <= mid; i++) arr[queries[i]] = 1;
        for(auto& it : arr) it = prev += it;
        for(auto& it : a) {
            int one = arr[it[1]] - arr[it[0]-1];
            int zero = it[1] - it[0] + 1 - one;
            if(one > zero) {curr = poss = true; break;}
        }
        if(curr) r = mid - 1;
        else l = mid + 1;
    }
    if(poss) cout << l + 1 << endl;
    else cout << -1 << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}