#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long
int dp[10] = {0};

void calc() {
    for(int i = 0; i <= 9; i++) {
        for(int j = 0; j <= i; j++) {
            for(int k = 0; k <= i; k++) {
                if(j + k <= i) dp[i]++;
            }
        }
    }
}

void solve() {
    ll n, ans = 1; cin >> n;
    while(n) {
        ans *= dp[n % 10];
        n /= 10;
    }
    cout << ans << endl;
}

int main() {
    calc();
	int t; cin >> t;
	while(t--) solve();

}