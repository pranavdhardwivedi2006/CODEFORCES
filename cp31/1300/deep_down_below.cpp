#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> nums;
    int m = n;
    while(m--) {
        int k;
        cin >> k;
        vector<int> temp(k);
        for(auto& it : temp) cin >> it;
        int x = temp[0] + 1;
        for(int i = 0; i < k; i++) {
            if(x + i <= temp[i]) x = temp[i] - i + 1;
        }
        nums.push_back({x, k});
    }
    sort(nums.begin(), nums.end());
    int ans = nums[0].first, sum = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(ans + sum < nums[i].first) ans = nums[i].first - sum;
        sum += nums[i].second;
    }
    cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}