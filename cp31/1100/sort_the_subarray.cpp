#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n, 0), b(n, 0);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    int l = 0, r = n - 1, mini = INT_MAX, maxi = 0;
    while(l < n && a[l] == b[l]) l++;
    while(r >= 0 && a[r] == b[r]) r--;
    for(int i = l; i <= r; i++) {
        mini = min(mini, b[i]);
        maxi = max(maxi, b[i]);
    }
    while(l >= 0 && b[l] <= mini) mini = min(mini, b[l--]);
    while(r < n && b[r] >= maxi) maxi = max(maxi, b[r++]);
    cout << l + 2 << " " << r << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
