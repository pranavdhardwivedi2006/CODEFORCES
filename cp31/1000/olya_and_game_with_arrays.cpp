#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<vector<int>> ans; 
	    int p = n;
	    while(p--) {
	        int m;
	        cin >> m;
	        vector<int> a(m);
	        for(int i = 0; i < m; i++) cin >> a[i];
	        sort(a.begin(), a.end());
	        ans.push_back({a[1], a[0]});
	    }
	    sort(ans.begin(), ans.end());
	    long long sum = 0;
	    int min = ans[0][1];
	    for(int i = 1; i < n; i++) {
	        sum += max(ans[i][0], ans[i][1]) * 1LL;
	        min = std::min(min, ans[i][1]);
	    }
	    cout << sum + 1LL * min << endl;
	}

}
