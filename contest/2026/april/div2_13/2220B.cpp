#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n); int i = 0;
    for(auto& it : a) cin >> it;
    bool flag = true;
    while(i < n) {
        int p = a[i], cnt = 0;
        while(i < n && p == a[i]) cnt++, i++;
        if(cnt >= k) flag = false;
    }
    flag ? yes : no;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}