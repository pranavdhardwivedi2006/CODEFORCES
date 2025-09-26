#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    string s;
	    cin >> s;
	    int zero = 0, one = 0;
	    for(auto it : s) it == '0' ? zero++ : one++;
	    for(auto it : s) {
	        it == '0' ? one-- : zero--;
	        if(one < 0 || zero < 0) break;
	    }
	    cout << max(one, zero) << endl;
	}

}
