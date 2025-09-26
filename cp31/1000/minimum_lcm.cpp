#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int s = 1;
	    for(int i = 2; i * i <= n; i++) {
	        if(n % i == 0) {
	            s = n / i;
	            break;
	        }
	    }
	    cout << s << " " << n - s << endl;
	}

}
