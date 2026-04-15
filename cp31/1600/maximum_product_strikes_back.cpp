#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

tuple<int, int, int> find(vector<int>& a) {
    int curr = 0, temp = 0, sign = 1, st = 0, en = -1;
    for(int i = 0; i < a.size(); i++) {
        if(abs(a[i]) == 2) temp++;
        if(a[i] < 0) sign = !sign;
        if(sign) {
            curr += temp;
            en = i; temp = 0;
        }
    }
    int curr2 = 0, temp2 = 0, sign2 = 1, st2 = -1, en2 = a.size() - 1;
    for(int i = a.size() - 1; i >= 0; i--) {
        if(abs(a[i]) == 2) temp2++;
        if(a[i] < 0) sign2 = !sign2;
        if(sign2) {
            curr2 += temp2;
            st2 = i; temp2 = 0;
        }
    }
    if(curr > curr2) return {curr, st, en};
    return {curr2, st2, en2};
}

void solve() {
    int n, i = 0; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    int ans[3] = {1, -1, -1};
    while(i < n) {
        while(i < n && a[i] == 0) i++;
        if(i >= n) continue;
        vector<int> temp; int base = i;
        while(i < n && a[i] != 0) temp.push_back(a[i++]);
        auto [u, v, w] = find(temp);
        if(u >= ans[0]) ans[0] = u, ans[1] = base + v, ans[2] = base + w;
    }
    if(ans[1] == -1) cout << n << " " << 0 << endl;
    else cout << ans[1] << " " << n - ans[2] - 1 << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}