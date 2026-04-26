#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

void solve() {
    int n; cin >> n;
    vector<int> ans(n);
    vector<bool> vis(n + 1, false);
    int l = 1, r = n;
    while(l < r) {
        int first, second;
        cout << "? " << l << " " << r << endl; cout.flush();
        cin >> first;
        cout << "? " << r << " " << l << endl; cout.flush();
        cin >> second;
        if(first > second) {ans[l++-1] = first; vis[first] = true;}
        else {ans[r---1] = second; vis[second] = true;}
    }
    if(l == r) {
        for(int i = 1; i <= n; i++) {
            if(!vis[i]) {
                ans[l-1] = i;
                break;
            }
        }
    }
    cout << "! ";
    for(auto& it : ans) cout << it << " "; cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}