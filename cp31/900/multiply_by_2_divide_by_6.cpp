#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, cnt = 0, flag = 1;
	    cin >> n;
	    while(n != 1) {
	        if(n % 6 == 0) {
	            cnt++;
	            n /= 6;
	        }
	        else if(n % 6 == 3) {
	            cnt += 2;
	            n /= 3;
	        }
	        else {
	            flag = 0;
	            break;
	        }
	    }
	    if(flag) cout << cnt << endl;
	    else cout << -1 << endl;
 	}

}
