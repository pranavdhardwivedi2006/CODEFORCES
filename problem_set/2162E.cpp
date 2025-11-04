#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    set<int> st; int p = n;
    vector<int> a(n);
    for(int i = 1; i <= n; i++) st.insert(i);
    for(auto& it : a) cin >> it;
    for(auto it : a) st.erase(it);
    for(auto it : st) if(k-- > 0) a.push_back(it), n++;
    while(k-- > 0) {
        int x = a[n-1], y = a[n-2], z = a[n-3], num = a[n-3];
        for(int i = 1; i <= p; i++) {
            if(i == x || i == y || i == z) continue;
            num = i; break;
        } 
        a.push_back(num); n++;
    }
    for(int i = p; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();

}
