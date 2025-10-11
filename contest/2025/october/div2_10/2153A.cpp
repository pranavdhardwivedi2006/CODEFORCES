#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n;
    set<int> st;
    for(int i = 0; i < n; i++) {
        int k; cin >> k;
        st.insert(k);
    }
    cout << st.size() << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}
