#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n,k,x;
    cin >> n >> k >> x;
    vector<ll> a(n), diff;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = 0; i < n - 1; i++) {
        if(a[i + 1] - a[i] > x) diff.push_back(a[i + 1] - a[i]);
    }
    ll cnt = diff.size() + 1;
    sort(diff.begin(), diff.end());
    for(int i = 0; i < diff.size() && k > 0; i++) {
        ll t = diff[i] / x;
        if(diff[i] % x == 0) t--;
        if(t <= k) {
            k -= t;
            cnt--;
        }
    }
    cout << cnt << endl;
}