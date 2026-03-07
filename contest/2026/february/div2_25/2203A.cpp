#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n, m, d; cin >> n >> m >> d;
    int g = d / m + 1;
    int ans = n / g;
    if(n % g) ans++;
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}