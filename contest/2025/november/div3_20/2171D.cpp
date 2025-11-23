#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    set<int> st;
    for(int i = 0; i < n; i++) {
        int k = *(st.begin());
        if(k > a[i] && k > n - i) {
            cout << "NO" << endl;
            return ;
        }
        st.insert(a[i]);
    }
    cout << "YES" << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}