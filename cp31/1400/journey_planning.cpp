#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    map<int, long long> mpp;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        mpp[x-i] += x;
    }
    long long ans = 0;
    for(auto it : mpp) ans = max(ans, it.second);
    cout << ans << endl;
}