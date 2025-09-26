#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    char c;
	    string s;
	    cin >> n >> c >> s;
	    int l = 0, r = 0, max = 0;
	    while(l < n) {
	        while(l < n && s[l] != c) l++;
	        if(l < r || l >= n) {
	            l++;
	            continue;
	        }
	        r = l;
	        while(s[r%n] != 'g') r++;
	        max = std::max(max, r - l);
	        l++;
	    }
	    cout << max << endl;
	}

}
