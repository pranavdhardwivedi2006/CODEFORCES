#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for(int i = 0; i < n; i++) cin >> nums[i];
    int l = 0, r = n - 1, ans = 0;
    ll sum1 = 0, sum2 = 0;
    while(l <= r) {
        if(sum1 <= sum2) sum1 += nums[l++];
        else sum2 += nums[r--];
        if(sum1 == sum2) {
            ans = l + n - r - 1;
        }
    }
    cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
