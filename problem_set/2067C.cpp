#include <bits/stdc++.h>
using namespace std;

bool sev(long long n) {
    string s = to_string(n);
    for(auto& it : s) if(it == '7') return true;
    return false;
}

void solve() {
    long long n; cin >> n;
    int ans = INT_MAX;
    long long num = 9;
    for(int i = 0; i < 9; i++) {
        long long c = n; int cnt = 0;
        while(!sev(c)) {
            cnt++;
            c += num;
        }
        ans = min(ans, cnt); num = num * 10 + 9;
    }
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();

}
