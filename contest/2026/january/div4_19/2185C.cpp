#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007

void solve() {
    int n, k; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    sort(a.begin(), a.end());
    int i = 0, mex = 0;
    while(i < n) {
        int prev = a[i], cnt = 0;
        while(i < n) {
            if(prev < a[i]) break;
            if(prev == a[i]) prev++, cnt++;
            i++;
        }
        mex = max(mex, cnt);
    }
    cout << mex << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
