#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    long long even = 0, odd = 0;
    map<long long, int> mpp;
    mpp[0]++;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) even += a[i];
        else odd += a[i];
        if(mpp.find(even - odd) != mpp.end()) {
            cout << "YES" << endl;
            return;
        }
        mpp[even - odd]++;
    }
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();

}