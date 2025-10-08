#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<long long> a(n);
    for(auto& it : a) cin >> it;
    map<int, int> mpp; int cnt = 0;
    for(auto& it : a) mpp[it]++;
    for(int i = 0; i < k; i++) {
        if(mpp[i] == 0) cnt++;
    }
    int x = mpp[k];
    if(x > cnt) cnt += x - cnt;
    cout << cnt << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
