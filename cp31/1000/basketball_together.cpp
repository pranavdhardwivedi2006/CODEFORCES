#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector < int > a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int l = 0, r = n - 1;
    int cnt = 0;
    while (l <= r) {
        int k = d / a[r];
        if (r - l >= k) cnt++;
        r--;
        l += k;
    }
    cout << cnt << endl;
}