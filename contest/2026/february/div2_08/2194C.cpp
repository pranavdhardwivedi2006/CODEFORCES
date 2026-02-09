#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<vector<bool>> trk(n, vector<bool>(26, false));
    string s;
    for(int i = 0; i < k; i++) {
        cin >> s;
        for(int j = 0; j < n; j++) {
            trk[j][s[j]-'a'] = true;
        }
    }
    string ans;
    for(int i = 1; i <= n; i++) {
        if(n % i) continue ;
        for(int j = 0; j < i; j++) {
            vector<bool> temp = trk[j];
            for(int k = j; k < n; k += i) {
                for(int l = 0; l < 26; l++) {
                    temp[l] = temp[l] & trk[k][l];
                }
            }
            bool is = false;
            for(int k = 0; k < 26; k++) {
                if(temp[k]) {
                    ans += 'a' + k;
                    is = true; break;
                }
            }
            if(!is) {
                ans = "";
                break ;
            }
        }
        if(ans != "") {
            for(int k = 0; k < n / i; k++) cout << ans; 
            cout << endl; return ;
        }
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
