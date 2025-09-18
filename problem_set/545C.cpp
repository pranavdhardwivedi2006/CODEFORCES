#include <bits/stdc++.h>
using namespace std;
int n; vector<pair<int, int>> arr;
map<pair<int, int>, int> mpp;

int rec(int idx, int lim) {
    if(idx == n) return 0;
    pair<int, int> it = {idx, lim};
    if(mpp.find(it) != mpp.end()) return mpp[it];
    auto [x, h] = arr[idx];
    int leave = rec(idx + 1, x);
    int left = 0, right = 0;
    if(lim + h < x) left = 1 + rec(idx + 1, x);
    if(idx == n - 1 || arr[idx+1].first > x + h) {
        right = 1 + rec(idx + 1, x + h);
    }
    return mpp[it] = max({left, leave, right});
}

int main() {
	cin >> n; arr.resize(n);
    for(auto& it : arr) cin >> it.first >> it.second;
    cout << rec(0, -1e9) << endl;
}
