#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> a(n);
    for(auto& it : a) cin >> it;
    vector<long long> trk(34, 1);
    for(int i = 1; i < 34; i++) trk[i] = trk[i-1] + (1LL << i);
    int s = 0;
    for(int i = 1; i < n; i++) {
        if(a[i] >= a[i-1]) continue;
        long long k = a[i-1] - a[i];
        int x = log2(k); int t = 0;
        long long p = pow(2, x);
        if(p != k) {
            if(trk[x] >= k) {
                s = max(s, x + 1);
                a[i] = a[i-1];
            }
            else {
                s = max(s, x + 2);
                a[i] += 2 * p;
            }
        }
        else {
            s = max(s, x + 1);
            a[i] += p;
        }
    }
    cout << s << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
