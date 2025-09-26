#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, cnt = 0;
	    cin >> n;
	    vector<long> a(n);
	    for(int i = 0; i <n; i++) cin >> a[i];
	    long min = a[0];
	    for(int i = 0; i < n; i++) {
	        min &= a[i];
	    }
	    std::cout << min << std::endl;
	    
 	}

}
