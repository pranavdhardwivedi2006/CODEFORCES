#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n,m,cnt=0;
	    cin >> n >> m;
	    vector<int> a;
	    for(int i = 0; i < n*m; i++) {
	        int k;
	        cin >> k;
	        if(k < 0) cnt++;
	        a.push_back(abs(k));
	    }
	    int sum = accumulate(a.begin(), a.end(), 0);
	    int min = *min_element(a.begin(), a.end());
	    if(cnt & 1) sum -= 2 * min;
	    cout << sum << endl;
	}

}
