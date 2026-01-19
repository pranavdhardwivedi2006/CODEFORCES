#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int s, k, m; cin >> s >> k >> m;
    int flip = m / k;
    int ex = m % k;
    int one = 0;
    if(s > k) one = k;
    else one = s;
    if(flip & 1) cout << (one > ex ? one - ex : 0) << endl;
    else cout << (s > ex ? s - ex : 0) << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
