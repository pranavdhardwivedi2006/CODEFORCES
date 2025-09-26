#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n,k;
	    cin >> n >> k;
	    int min = INT_MAX, even = 0;
	    for(int i = 0; i < n; i++) {
	        int p;
	        cin >> p;
	        if(p % k) min = std::min(min, k - p % k);
	        else min = 0;
	        if(p % 2 == 0) even++;
	    }
	    if(k == 4) {
	        if(even == 0) min = std::min(2, min);
	        else if(even == 1) min = std::min(1, min);
	        else min = 0;
	    }
	    cout << min << endl;
	} 

}
