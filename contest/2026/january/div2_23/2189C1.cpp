#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n; cin >> n;
    if(n % 2 == 0) cout << n << " ";
    else cout << n - 1 << " ";
    for(int i = 2; i < n; i++) {
        if(i & 1) cout << i - 1 << " ";
        else cout << i + 1 << " ";
    }
    cout << 1 << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
