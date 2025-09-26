#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, max = 0;
	    cin >> n;
	    unordered_map<int, int> mpp;
	    for(int i = 0; i < n; i++) {
	        int k;
	        cin >> k;
	        mpp[k]++;
	        max = std::max(max, mpp[k]);
	    }
	    int op = 0;
	    while(max < n) {
	        int copy = min(max, n - max);
	        op += 1 + copy;
	        max += copy;
	    }
	    cout << op << endl;
	} 

}
