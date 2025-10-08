#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        int k; cin >> k;
        mpp[k]++;
    }
    int maxi = 0;
    for(int i = 1; i <= n; i++) {
        int sum = 0;
        for(auto it : mpp) if(it.second >= i) sum += i;
        maxi = max(maxi, sum);
    }
    cout << maxi << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}