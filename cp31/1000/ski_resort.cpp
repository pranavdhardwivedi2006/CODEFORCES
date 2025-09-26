#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n,k,q;
	    cin >> n >> k >> q;
	    vector<int> a(n);
	    for(int i = 0; i < n; i++) cin >> a[i];
	    long long ans = 0;
	    for(int i = 0; i < n; i++) {
	        int cnt = 0;
	        while(i < n && a[i] <= q) cnt++,i++;
	        long long p = cnt - k + 1;
	        if(p < 0) continue;
	        ans += p * (p + 1) / 2;
	    }
	    cout << ans << endl;
	}

}
