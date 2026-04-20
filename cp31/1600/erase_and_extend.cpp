#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n, k; cin >> n >> k;
    string s, ans(k, 'z' + 1); cin >> s;
    for(int i = 1; i <= n; i++) {
        string temp(k, ' ');
        for(int j = 0; j < k; j++) {
            temp[j] = s[j%i];
        }
        ans = min(ans, temp);
    }
    cout << ans << endl;
}

int main() {
    solve();

}