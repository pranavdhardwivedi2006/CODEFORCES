#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<bool> vis(n, false);
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            int j;
            if(!vis[i]) j = i;
            else j = 2 * i + 1;
            while(j < n) {
                if(s[j] == '0' && !vis[j]) {
                    vis[j] = true;
                    ans += i + 1;
                }
                else if(s[j] == '1') break;
                j += i + 1;
            }
        }
    }
    cout << ans << endl;
}


int main() {
    int t;
    cin >> t;
    while(t--) solve();
 
}
