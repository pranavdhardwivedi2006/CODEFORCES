#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin >> n;
    vector<int> a(n), vis(n+1);
    for(auto& it : a) cin >> it;
    vector<vector<int>> edges;
    set<int> st(a.begin(), a.end());
    for(int i = a[0] + 1; i <= n; i++) {
        vis[i] = true;
        edges.push_back({a[0], i});
    }
    st.erase(a[0]);
    int maxi = a[0] - 1;
    for(int i = 1; i < n; i++) {
        st.erase(a[i]);
        if(vis[a[i]] || st.empty()) continue;
        int k = *st.rbegin();
        if(k > a[i] && vis[k]) {
            vis[a[i]] = true;
            edges.push_back({a[i], k});
            for(int x = a[i] + 1; x <= maxi; x++) {
                edges.push_back({a[i], x});
                vis[x] = true;
            }
            maxi = a[i] - 1;
        } else break;
    }
    if(edges.size() != n - 1) {
        cout << "NO\n"; return ;
    }
    cout << "YES\n";
    for(auto& it : edges) {
        for(auto& x : it) {
            cout << x << " ";
        }
        cout << endl;
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; cin >> t;
    while(t--) solve();
}