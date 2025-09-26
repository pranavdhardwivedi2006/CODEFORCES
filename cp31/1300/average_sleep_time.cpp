#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    long long sum = 0;
    for(int i = 0; i < k; i++) sum += a[i];
    int l = 0, r = k;
    long double ans = sum;
    while(r < n) {
        sum -= a[l++];
        sum += a[r++];
        ans += sum;
    }
    cout << fixed << setprecision(6) << ans / (n - k + 1) << endl;
}
