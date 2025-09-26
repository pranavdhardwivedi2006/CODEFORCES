#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> a(n, 0);
	    for(int i = 0; i < n; i++) cin >> a[i];
	    vector<int> trk;
	    for(int i = 1; i <= n / 2; i++) if(!(n % i)) trk.push_back(i);
	    long long ans = 0;
	    for(auto it : trk) {
	        long long max = 0, min = 1e15;
	        for(int i = 0; i < n; ) {
	            int p = it;
	            long long sum = 0;
	            while(p--) sum += a[i++];
	            max = std::max(max, sum);
	            min = std::min(min, sum);
	        }
	        ans = std::max(ans, max - min);
	    }
	    cout << ans << endl;
	}

}
