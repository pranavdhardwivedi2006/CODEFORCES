#include <bits/stdc++.h>
using namespace std;
int n; 

long long find(string& s, char c) {
    int l = 0, r = n - 1;
    while(l < n && s[l] != c) l++;
    while(r >= 0 && s[r] != c) r--;
    long long i = l, ans = 0, cnt = 0, curr = 0;
    for(int i = l; i <= r; i++) if(s[i] == c) cnt++;
    while(i < r) {
        if(s[i] != c) {
            if(curr <= cnt - curr) ans += curr;
            else ans += cnt - curr;
        }
        else curr++;
        i++;
    }
    return ans;
}

void solve() {
    cin >> n;
    string s; cin >> s;
    cout << min(find(s, 'a'), find(s, 'b')) << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
