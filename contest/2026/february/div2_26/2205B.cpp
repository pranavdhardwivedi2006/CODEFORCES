#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n, k; cin >> n;
    map<int, int> mpp;
    for(int i = 2; i * i <= n; i++) {
        while(n % i == 0) {
            mpp[i]++;
            n /= i;
        }
    }
    if(n > 1) mpp[n]++;
    ll ans = 1;
    for(auto& [u, v] : mpp) {
        ans *= u;
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}