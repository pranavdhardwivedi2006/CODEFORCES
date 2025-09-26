#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int k = log2(n - 1);
	    for(int i = 1; i < pow(2, k); i++) {
	        cout << i << " ";
	    }
	    cout << 0 << " ";
	    for(int i = pow(2, k); i < n; i++) {
	        cout << i << " ";
	    }
	    cout << endl;
	}

}