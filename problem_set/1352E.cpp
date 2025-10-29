#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        vector<int> mpp(8001, 0), st(8001, 0);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mpp[a[i]]++;
        }
        for(int i = 0; i < n - 1; i++) {
            int sum = a[i];
            for(int j = i + 1; j < n; j++) {
                sum += a[j];
                if(sum <= 8000 && mpp[sum]) st[sum] = mpp[sum];
            }
        }
        int ans = 0;
        for(auto it : st) ans += it;
        cout << ans << endl;
    }

    return 0;
}