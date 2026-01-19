#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007

void solve() {
    int n, k, maxi = 0; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> k; maxi = max(maxi, k);
    }
    cout << maxi * n << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
