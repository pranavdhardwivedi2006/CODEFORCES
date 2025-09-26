#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n,p;
	    cin >> n >> p;
	    vector<int> a(n), b(n), idx(n), mpp;
	    for(int i = 0; i < n; i++) cin >> a[i];
	    for(int i = 0; i < n; i++) cin >> b[i];
	    for (int i = 0; i < idx.size(); i++) idx[i] = i;
	    sort(idx.begin(), idx.end(), [&b](int i, int j) {
            return b[i] < b[j];
        });
        sort(b.begin(), b.end());
	    for(auto it : idx) mpp.push_back(a[it]);
	    int l = 0, r = n - 1;
	    long long cost = p;
	    while(l < r) {
	        if(b[l] < p) {
	            cost += 1LL * b[l] * min(mpp[l], r - l);
	            r -= mpp[l] - 1;
	        }
	        else {
	            cost += 1LL * p * (r - l); 
	            break;
	        }
	        l++;
	    }
	    cout << cost << endl;
	} 
}