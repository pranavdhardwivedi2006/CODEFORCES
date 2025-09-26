#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), pre(n), post(n); 
    for(int i = 0; i < n; i++) cin >> a[i];
    pre[0] = a[0]; post[n-1] = a[n-1];
    for(int i = 1; i < n; i++) pre[i] = pre[i-1] & a[i];
    for(int i = n - 2; i >= 0; i--) post[i] = post[i+1] & a[i];
    int cnt = 0;
    if(n > 1) {
        if(a[0] == post[1]) cnt++;
        if(a[n-1] == pre[n-2]) cnt++;
    }
    for(int i = 1; i < n - 1; i++) {
        if((pre[i-1] & post[i+1]) == a[i]) cnt++;
    }
    long long ans = 1LL * cnt * (cnt - 1);
    for(int i = n - 2; i > 0; i--) {
        ans = (ans * i) % 1000000007;
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
