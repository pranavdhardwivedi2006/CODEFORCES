#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n, k; cin >> n;
    vector<int> a(n), ans(n);
    for(auto& it : a) cin >> it;
    sort(a.begin(), a.end());
    int l = 0, r = n - 1, i = 0, sum = 0;
    while(l <= r) {
        if(sum >= 0) sum += ans[i++] = a[l++]; 
        else sum += ans[i++] = a[r--]; 
    }
    int maxi = 0; sum = i = 0;
    while(i < n) {
        sum += ans[i++];
        if(sum < 0) sum = 0;
        maxi = max(maxi, sum);
    }
    sum = *max_element(ans.begin(), ans.end());
    sum -= *min_element(ans.begin(), ans.end());
    if(maxi < sum) {
        yes
        for(auto& it : ans) cout << it << " ";
        cout << endl;
    } else no
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}