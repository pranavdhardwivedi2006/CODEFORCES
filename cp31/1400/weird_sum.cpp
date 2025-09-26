#include <bits/stdc++.h>
using namespace std;

long long calc(vector<vector<int>>& arr) {
    int n = arr.size();
    long long ans = 0;
    for(int i = 1; i < n; i++) {
        int m = arr[i].size();
        int k = m;
        for(int j = 0; j < m; j++) {
            int p = arr[i][j] - arr[i][j-1];
            ans += 1LL * p * j * k--; 
        }
    }
    return ans;
}

int main() {
	int n,m; cin >> n >> m;
	vector<vector<int>> x(1e5 + 1), y(1e5 + 1);
	for(int i = 0; i < n; i++) {
	    for(int j = 0; j < m; j++) {
    	    int k; cin >> k;
    	    x[k].push_back(i);
	        y[k].push_back(j); 
	    }
	}
    for(int i = 1; i <= 1e5; i++) {
        sort(x[i].begin(), x[i].end());
        sort(y[i].begin(), y[i].end());
    }
    cout << calc(x) + calc(y) << endl;
}
