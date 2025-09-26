#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n,q;
	    cin >> n >> q;
	    vector<int> a(n, 0), x(q, 0), power(31, 0);
	    for(int i = 0; i < n; i++) cin >> a[i];
	    for(int i = 0; i < q; i++) cin >> x[i];
	    for(int i = 0; i < 31; i++) power[i] = pow(2, i);
	    int k = x[0] + 1;
	    for(auto it : x) {
	        if(it >= k) continue;
	        for(auto& i : a) {
	            if(i % power[it] == 0) i += power[it-1]; 
	        }
	        k = it;
	    }
	    for(auto it : a) cout << it << " ";
	    cout << endl;
	}

}