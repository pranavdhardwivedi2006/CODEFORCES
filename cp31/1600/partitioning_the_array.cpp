#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

int find(int k, vector<int>& a) {
    int gcd = 0, n = a.size();
    for(int i = 0; i < k; i++) {
        for(int j = i; j + k < n; j += k) {
            gcd = std::gcd(gcd, abs(a[j+k] - a[j]));
        }
    }
    return gcd != 1;
}

void solve() {
    int n, ans = 0; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    for(int i = 1; i * i <= n; i++) {
        if(n % i) continue;
        ans += find(i, a) + (i != n / i ? find(n / i, a) : 0);
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}