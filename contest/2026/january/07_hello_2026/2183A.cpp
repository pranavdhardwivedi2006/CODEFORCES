#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    if(a[0] == 0 && a[n-1] == 0) cout << "BOB" << endl;
    else cout << "ALICE" << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
