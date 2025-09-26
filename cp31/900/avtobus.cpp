#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long n;
	    cin >> n;
	    if(n & 1 || n < 4) std::cout << -1 << std::endl;
	    else {
	        long long max = n / 4; 
	        long long min = n / 6;
	        if(n % 6 != 0) min++;
	        cout << min << " " << max << endl;
	    }
	}

}
