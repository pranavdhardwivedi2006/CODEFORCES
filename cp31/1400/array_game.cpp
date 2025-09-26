#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k; cin >> n >> k;
    vector<long long> a(n); for(auto& it : a) cin >> it;
    if(k > 2) {
        cout << 0 << endl;
        return ;
    }
    sort(a.begin(), a.end());
    if(k == 1) {
        long long mini = a[0];
        for(int i = 0; i < n - 1; i++) {
            mini = min(mini, a[i+1] - a[i]);
        }
        cout << mini << endl;
    }
    else {
        vector<long long> trk;
        long long mini = a[0];
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                long long k = a[j] - a[i];
                mini = min(mini, k);
                trk.push_back(k);
            }
        }
        sort(trk.begin(), trk.end());
        int l = 0, r = 0, m = trk.size();
        while(l < n && r < m) {
            if(a[l] <= trk[r]) {
                while(l < n && a[l] <= trk[r]) {
                    mini = min(mini, trk[r] - a[l]);
                    l++;
                }
            }
            else {
                while(r < m && trk[r] < a[l]) {
                    mini = min(mini, a[l] - trk[r]);
                    r++;
                }
            }
        }
        cout << mini << endl;
    }
    
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
