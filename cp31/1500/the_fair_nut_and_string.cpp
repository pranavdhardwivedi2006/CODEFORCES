#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    string s; cin >> s;
    int r = s.size() - 1;
    long long curr = 1, ans = 0;
    while(r >= 0) {
        int cnt = 0;
        while(r >= 0 && s[r] != 'b') {
            if(s[r] == 'a') {
                cnt++;
                ans = (ans + curr) % MOD;
            }
            r--;
        } 
        while(r >= 0 && s[r] == 'b') r--;
        curr = (curr + curr * cnt) % MOD;
    }
    cout << ans << endl;
}

int main() {
    solve();

}