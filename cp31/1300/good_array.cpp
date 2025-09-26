#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    vector<int> a(n), ans;
    map<long long, vector<int>> mpp;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mpp[a[i]].push_back(i + 1);
    }
    long long sum = 0;
    sort(a.begin(), a.end());
    vector<int> temp = mpp[a[n-1]];
    mpp.erase(a[n-1]);
    for(int i = 0; i < n - 1; i++) sum += a[i];
    for(auto it : mpp[sum - a[n-1]]) ans.push_back(it);
    if(sum == 2 * a[n-2]) {
        for(auto it : temp) ans.push_back(it);
    }
    cout << ans.size() << endl;
    for(auto it : ans) cout << it << " ";
    cout << endl;
}
