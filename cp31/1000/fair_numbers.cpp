#include <bits/stdc++.h>
using namespace std;

bool solve(long long n) {
    vector<int> trk(10, 0);
    long long p = n;
    while(p) {
        trk[p%10]++;
        p /= 10;
    }
    for(int i = 1; i < 10; i++) {
        if(trk[i] && n % i != 0) return 0; 
    }
    return 1;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    long long n;
	    cin >> n;
	    while(1) {
	        bool k = solve(n);
	        if(k) break;
	        n++;
	    }
	    cout << n << endl;
	}

}
