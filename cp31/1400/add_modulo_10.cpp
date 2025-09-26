#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n); for(auto& it : a) cin >> it;
    int z = 0, f = 0;
    for(auto it : a) {
        if(it % 10 == 0) z++;
        if(it % 10 == 5) f++;
    }
    if(z + f == n) {
        set<int> st;
        for(auto it : a) st.insert(it);
        if(st.size() > 2) cout << "NO" << endl;
        else if(st.size() == 1) cout << "YES" << endl;
        else {
            auto it = st.begin();
            int x = *it; it++;
            int y = *it;
            if(x % 10 == 5 && y % 10 == 0 && y - x == 5) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    else if(z + f == 0) {
        for(auto& x : a) {
            while(x % 10 != 2) x += x % 10;
        }
        sort(a.begin(), a.end());
        int k = a[n-1];
        bool flag = true;
        for(auto it : a) {
            if((k - it) % 20 != 0) flag = false;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else cout << "NO" << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
