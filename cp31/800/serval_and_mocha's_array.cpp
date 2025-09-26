#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    std::vector<int> arr(n);
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    int min = INT_MAX;
	    for(int i = 0; i < n; i++) {
	        for(int j = i + 1; j < n; j++) {
	            //min = std::min(min, gcd(arr[i], arr[j])); // this  line is commented bcz gcd function is not supported by vs code compiler
	        }
	    }
	    if(min < 3) std::cout << "YES" << std::endl;
	    else cout << "NO" << endl;
	}

}
