#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007
#define MOD 998244353

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    int i = n - 1, three = 0; 
    long long prev = 0, ans = 0;
    while(i >= 0) {
        if(a[i] == 1) ans = (ans + prev) % MOD;
        else if(a[i] == 2) prev = (three + 2 * prev) % MOD;
        else three++;
        i--;
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
