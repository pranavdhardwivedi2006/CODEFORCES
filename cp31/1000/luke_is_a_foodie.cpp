#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n,x;
	    cin >> n >> x;
	    vector<int> a(n);
	    for(int i = 0; i < n; i++) cin >> a[i];
	    int min = a[0], max = a[0], cnt = 0;
	    for(int i = 0; i < n; i++) {
	        min = std::min(min, a[i]);
	        max = std::max(max, a[i]);
	        if(max - min > 2 * x) {
	            cnt++;
	            min = max = a[i];
	        }
	    }
	    cout << cnt << endl;
	}

}
