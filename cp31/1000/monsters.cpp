#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n,p;
	    cin >> n >> p;
	    vector<int> a(n), ans; 
	    for(int i = 0; i < n; i++) cin >> a[i];
	    map<int, vector<int>> mpp;
	    for(int i = 0; i < n; i++) {
	        if(a[i] % p) mpp[a[i] % p].push_back(i + 1);
	        else mpp[p].push_back(i + 1);
	    }
	    for(auto it : mpp) {
	        reverse(it.second.begin(), it.second.end());
	        for(auto i : it.second) ans.push_back(i);
	    }
	    reverse(ans.begin(), ans.end());
	    for(auto it : ans) cout << it << " ";
	    cout << endl;
	}

}
