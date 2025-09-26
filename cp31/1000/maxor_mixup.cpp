#include <bits/stdc++.h>
using namespace std;

int calc_xor(int n) {
    if(n % 4 == 0) return n;
    if(n % 4 == 1) return 1;
    if(n % 4 == 2) return n + 1;
    else return 0;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int a,b;
	    cin >> a >> b;
	    int ans = a;
	    int x = calc_xor(a - 1);
	    if(x != b) {
	        if((x ^ b) == a) ans += 2;
	        else ans++;
	    }
	    cout << ans << endl;
	}

}
