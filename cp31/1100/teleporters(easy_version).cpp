#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n,k;
	    cin >> n >> k;
	    vector<int> a(n, 0);
	    for(int i = 0; i < n; i++) cin >> a[i];
	    for(int i = 0; i < n; i++) a[i] += i + 1;
	    sort(a.begin(), a.end());
	    int r = 0, sum = 0;
	    while(r < n && sum + a[r] <= k) sum += a[r++];
	    cout << r << endl;
	}

}