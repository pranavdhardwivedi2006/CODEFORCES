#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    int l = 1, r = n;
    while(l <= r) {
        int mid = (l + r) >> 1;
        int rich = mid - 1, poor = 0;
        int people = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] >= rich && b[i] >= poor) {
                rich--; poor++; people++;
            }
        }
        if(people >= mid) l = mid + 1;
        else r = mid - 1;
    }
    cout << r << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}