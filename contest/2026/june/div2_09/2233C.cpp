#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s, ans(n, '0'); cin >> s;
    vector<int> open(n), close(n);
    int x = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '(') x++;
        close[i] = x;
    }
    x = 0;
    for(int i = n - 1; i >= 0; i--) {
        if(s[i] == ')') x++;
        open[i] = x;
    }
    while(k--) {
        int index = 0, maxi = 0;
        for(int i = 0; i < n; i++) {
            if(ans[i] == '1') continue;
            int val = s[i] == '(' ? open[i] : close[i];
            if(val > maxi) maxi = val, index = i;
        }
        ans[index] = '1';
        if(s[index] == '(') {
            for(int i = index; i < n; i++) close[i]--;
        } else {
            for(int i = index; i >= 0; i--) open[i]--;
        }
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}