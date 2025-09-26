#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int one = 0, max = 0, zero = 0;
    for(int i = 0; i < 2 * n; i++) {
        if(s[i%n] == '0') zero++, max = 0;
        else one = std::max(++max, one);
        
    }
    if(!zero) cout << 1LL * n * n << endl;
    else {
        long long ans = one;
        for(int i = 1; i <= one / 2 + one % 2; i++) {
            ans = std::max(ans, 1LL * i * (one - i + 1));
        }
        cout << ans << endl;
    }
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
