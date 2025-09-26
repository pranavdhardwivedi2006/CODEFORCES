#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> b(q);
    map<int, long long> mpp;
    for(int i = 0; i < q; i++) {
        cin >> b[i];
        mpp[b[i]] = 0;
    }
    int l = 0;
    long long sum = 0;
    for(auto& it : mpp) {
        while(l < n && a[l] <= it.first) {
            sum += a[l];
            l++;
        }
        it.second = sum;
    }
    for(auto it : b) {
        cout << mpp[it] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}