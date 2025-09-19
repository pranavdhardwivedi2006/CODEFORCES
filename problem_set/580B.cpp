#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, d; cin >> n >> d;
	vector<pair<int, int>> a(n);
	for(auto& [u, v] : a) cin >> u >> v;
	sort(a.begin(), a.end());
	int l = 0, r = 0;
	long long maxi = 0, sum = 0;
	while(r < n) {
	    while(r < n && a[l].first + d > a[r].first) sum += a[r++].second;
	    maxi = max(maxi, sum);
	    sum -= a[l++].second;
	}
	cout << maxi << endl;
}