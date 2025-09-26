#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
    	cin >> n;
    	int gcd = 0;
    	for(int i = 1; i <= n; i++) {
    	    int k;
    	    cin >> k;
    	    // gcd = std::gcd(gcd, abs(k-i)); // this line is required find gcd is not supported in 17 or less compilers
    	}
    	std::cout << gcd << std::endl;
	}
	
}
