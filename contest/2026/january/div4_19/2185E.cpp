#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007

int findl(vector<int>& b, int x) {
    int ans = 1e9;
    int l = 0, r = b.size() - 1;
    while(l <= r) {
        int mid = l + (r - l) / 2;
        if(b[mid] < x) {
            ans = x - b[mid];
            l = mid + 1;
        }
        else r = mid - 1;
    }
    return ans;
}

int findr(vector<int>& b, int x) {
    int ans = 1e9;
    int l = 0, r = b.size() - 1;
    while(l <= r) {
        int mid = l + (r - l) / 2;
        if(b[mid] > x) {
            ans = b[mid] - x;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return ans;
}

void solve() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for(auto& it : a) cin >> it;
    for(auto& it : b) cin >> it;
    sort(b.begin(), b.end());
    map<pair<int, int>, int> mpp1, mpp2;
    for(int i = 0; i < n; i++) {
        int l = findl(b, a[i]);
        int r = findr(b, a[i]);
        mpp1[{l, r}]++; mpp2[{r, l}]++;
    }
    string s; cin >> s; int ans = n;
    int left = 0, right = 0, curr = 0;
    for(auto it : s) {
        it == 'R' ? curr++ : curr--;
        left = min(left, curr);
        right = max(right, curr);
        while(!mpp1.empty() && mpp1.begin()->first.first <= abs(left)) {
            auto [u, v] = *mpp1.begin(); auto[x, y] = u;
            mpp1.erase(u); mpp2.erase({y, x}); ans -= v;
        }
        while(!mpp2.empty() && mpp2.begin()->first.first <= right) {
            auto [u, v] = *mpp2.begin(); auto[x, y] = u;
            mpp2.erase(u); mpp1.erase({y, x}); ans -= v;
        }
        cout << ans << " ";
    }
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
