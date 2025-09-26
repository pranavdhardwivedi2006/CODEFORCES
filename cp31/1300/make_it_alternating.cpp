#include <bits/stdc++.h>
using namespace std;
int M = 998244353;
vector<int> trk(1e5 + 1, 0);
 
void solve() {
    string s;
    cin >> s;
    int n = s.size(), ele = 0, i = 0, x = 0;
    long long ans = 1;
    while(i < n) {
        char c = s[i];
        int cnt = 0;
        while(i < n && c == s[i]) cnt++, i++;
        if(cnt > 1) x++;
        ans = (ans * trk[cnt]) % M;
        ele += cnt - 1;
    }
    if(x) ans = ans * x % M;
    cout << ele << " " << ans << endl;
}
 
int main() {
	int t;
	cin >> t;
	long long prod = 1;
	for(int i = 1; i <= 1e5; i++) {
	    prod = (prod * i) % M;
	    trk[i] = prod;
	}
	while(t--) solve();
 
}