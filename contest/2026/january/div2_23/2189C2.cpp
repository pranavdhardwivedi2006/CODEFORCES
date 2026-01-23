#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n; cin >> n;
    if((n & (n - 1)) == 0) {
        cout << -1 << endl;
        return ;
    }
    vector<int> a(n); a[0] = n; a[n-1] = 1;
    for(int i = 2; i < n; i++) {
        if(i & 1) a[i-1] = i - 1;
        else a[i-1] = i + 1;
    }
    if(n & 1) a[0] = n - 1;
    else {
        int cnt = 0;
        while(n && !(n & 1)) {
            cnt++;
            n >>= 1;
        }
        for(auto& it : a) {
            if(it == (1 << cnt)) {
                it = a[0];
                a[0] = 1 << cnt;
            }
        }
    }
    for(auto it : a) cout << it << " ";
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
