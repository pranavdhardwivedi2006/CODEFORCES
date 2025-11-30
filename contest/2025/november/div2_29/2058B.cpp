#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    map<int, int> mpp;
    for(int i = 0; i < 2 * n; i++) {
        int k; cin >> k;
        mpp[k]++;
    }
    int even = 0, odd = 0, extra = 0, x = 0;
    for(auto [u, v] : mpp) {
        if(v & 1) extra++, x += v;
        else if((v  / 2) % 2) odd++;
        else even++;
    }
    odd *= 2; odd += 2 * (even % 2 ? even - 1 : even);
    if((even & 1) && x > 1) odd += 2;
    odd += extra;
    cout << odd << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
