#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, flag = 0;
	    cin >> n;
	    map<int, int> mpp;
	    for(int i = 0; i < n; i++) {
	        int k;
	        cin >> k;
	        mpp[k]++;
	    }
	    for(auto it : mpp) if(it.second > 1) flag = 1;
	    if(flag) cout << "YES" << endl;
	    else cout << "NO" << endl;
	    
	}

}
