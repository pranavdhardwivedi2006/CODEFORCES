#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    map<int, int> mpp;
	    for(int i = 0; i < n; i++) {
	        int k; cin >> k;
	        mpp[k]++;
	    }
	    int ans = 0;
	    for(auto& [u, v] : mpp) {
	        if(v < u) ans += v;
	        else ans += v - u;
	    }
	    cout << ans << endl;
	}

}
