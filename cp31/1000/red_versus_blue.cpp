#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t; 
	cin >> t;
	while(t--) {
	    int n,r,b;
	    cin >> n >> r >> b;
	    int s = r / (b + 1);
	    int e = r % (b + 1);
	    while(b--) {
	        int k = s;
	        while(r > 0 && k--) {
	            cout << 'R';
	            r--;
	        }
	        if(e) {
	            cout << 'R';
	            e--,r--;
	        }
	        cout << 'B';
	    }
	    while(r--) cout << 'R';
	    cout << endl;
	}
 
}