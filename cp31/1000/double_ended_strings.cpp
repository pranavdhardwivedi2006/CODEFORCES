#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    string a,b;
	    cin >> a >> b;
	    int n = a.size(), m = b.size(), max = 0;
	    for(int i = 0; i < n; i++) {
	        string s;
	        for(int j = i; j < n; j++) {
	            s += a[j];
	            if(b.find(s) != string::npos) max = std::max(max, j - i + 1);
	        }
	    }
	    cout << n + m - 2 * max << endl;
	}

}