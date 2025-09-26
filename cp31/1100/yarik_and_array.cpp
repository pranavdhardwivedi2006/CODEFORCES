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
	    int sum = 0, x = !(a[0] & 1), max = INT_MIN;
	    for(int i = 0; i < n; i++) {
	        sum += a[i];
	        if(x == (a[i] & 1)) sum = a[i];
	        x = a[i] & 1;
	        max = std::max(max, sum);
	        if(sum < 0) sum = 0;
	    }
	    cout << max << endl;
	}

}
