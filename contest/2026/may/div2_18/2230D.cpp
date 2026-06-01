#include<bits/stdc++.h>
using namespace std;

long long other(vector<int>& a, vector<int>& b) {
    long long ans = 0, i = 0, n = a.size();
    while(i < n) {
        long long cnt = 0;
        while(i < n && (a[i] != 1 && b[i] != 1)) cnt++, i++;
        ans += cnt * (cnt + 1) / 2;
        i++;
    }
    return ans;
}

long long one(vector<int>& a, vector<int>& b) {
    long long ans = 0, prev = 0;
    int n = a.size(); int i = n - 1; 
    vector<int> trk(n + 1);
    vector<int> comp(n + 2, n), partial(n + 2, n);
    while(i >= 0) {
        if(a[i] == b[i]) {
            trk[i] = comp[a[i]] = min(comp[a[i]+1], partial[a[i]+1]);
            partial[a[i]] = n;
        } else {
            partial[a[i]] = i;
            partial[b[i]] = i;
        }
        i--;
    }
    i = n - 1;
    while(i >= 0) {
        if(a[i] == b[i] && a[i] == 1) {
            ans += prev = trk[i] - i;
        } else if(a[i] == 1 || b[i] == 1) {
            prev = 0;
        } else {
            ans += prev;
        }
        i--;
    }
    return ans;
}

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto& it : a) cin >> it;
    for(auto& it : b) cin >> it;
    cout << one(a, b) + other(a, b) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}