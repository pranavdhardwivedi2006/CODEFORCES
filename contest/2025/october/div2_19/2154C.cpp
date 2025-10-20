#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto& it : a) cin >> it;
    for(auto& it : b) cin >> it;
    set<int> st; bool flag = false;
    for(auto it : a) {
        if(it % 2 == 0) flag = true;
        for(int i = 2; i * i <= it && it > 1; i++) {
            if(it % i == 0) {
                if(st.find(i) != st.end()) {
                    cout << 0 << endl;
                    return ;
                }
                else st.insert(i);
            }
            while(it % i == 0) it /= i;
        }
        if(it > 1) {
            if(st.find(it) != st.end()) {
                cout << 0 << endl;
                return ;
            }
            else st.insert(it);
        }
    }
    for(auto it : st) {
        for(auto x : a) {
            if(x > 1 && x % it == it - 1) {
                cout << 1 << endl;
                return ;
            }
        }
    }
    if(flag) cout << 1 << endl;
    else cout << 2 << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();
}
