#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	map<string, vector<pair<int, int>>> mpp;
	for(int i = 0; i < n; i++) {
	    string s; cin >> s;
	    int k; cin >> k;
	    if(mpp[s].empty()) mpp[s].push_back({k, i});
	    else mpp[s].push_back({mpp[s].back().first + k, i});
	}
	int maxi = -1e9, idx = n; string ans;
	for(auto& it : mpp) maxi = max(maxi, it.second.back().first);
	for(auto& it : mpp) {
	    if(it.second.back().first != maxi) continue;
	    for(auto& [u, v] : it.second) {
	        if(u >= maxi && v < idx) {
	            ans = it.first;
	            idx = v;
	        }
	    }
	}
	cout << ans << endl;
}