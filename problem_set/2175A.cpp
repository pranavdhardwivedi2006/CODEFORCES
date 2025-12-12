#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n; cin >> n;
    unordered_set<int> st;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        st.insert(x);
    }
    while(1) {
        int s = st.size();
        if(st.find(s) != st.end()) {
            cout << s << endl;
            return ;
        }
        st.insert(s);
    }
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
