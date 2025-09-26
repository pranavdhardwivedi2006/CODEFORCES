#include <bits/stdc++.h>
using namespace std;

int find(long long n) {
    int cnt = 0;
    while(n != 1) {
        if(n & 1) return -1;
        n /= 2;
        cnt++;
    }
    return cnt;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    long long a,b;
	    cin >> a >> b;
	    if(a >= b) {
	        if(a % b != 0) cout << -1 << endl;
	        else {
	            int k = find(a / b);
	            if(k == -1) cout << -1 << endl;
	            else {
    	            int ans = k / 3;
    	            if(k % 3) ans++;
    	            cout << ans << endl;
	            }
	        }
	    }
	    else {
	        if(b % a != 0) cout << -1 << endl;
	        else {
	            int k = find(b / a);
	            if(k == -1) cout << -1 << endl;
	            else {
    	            int ans = k / 3;
    	            if(k % 3) ans++;
    	            cout << ans << endl;
	            }
	        }
	    }
	}

}
