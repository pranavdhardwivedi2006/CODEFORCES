#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n, k1, k2; cin >> n >> k1 >> k2;
    vector<int> a(n); for(auto& it : a) cin >> it;
    priority_queue<int, vector<int>> pq;
    for(int i = 0; i < n; i++) {
        int b; cin >> b; pq.push(abs(a[i] - b));
    }
    k1 += k2;
    while(k1--) {
        int k = pq.top(); pq.pop();
        k = abs(k - 1); pq.push(k);
    }
    long long ans = 0;
    while(!pq.empty()) {
        ll k = pq.top(); pq.pop();
        ans += k * k;
    }
    cout << ans << endl;
}

int main() {
	solve();

}