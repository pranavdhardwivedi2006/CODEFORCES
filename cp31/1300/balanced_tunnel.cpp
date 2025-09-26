#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    int r = 0, ans = 0;
    set<int> st;
    for(auto it : a) {
        if(st.find(it) != st.end()) continue ;
        while(b[r] != it) {
            st.insert(b[r]);
            r++;
            ans++;
        }
        r++;
    }
    cout << ans << endl;
}

int main() {
	solve();
}
