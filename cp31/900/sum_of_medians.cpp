#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n,k;
	    cin >> n >> k;
	    vector<long long> a(n * k);
	    int p = n / 2 + 1;
	    long long sum = 0;
	    for(int i = 0; i < n * k; i++) cin >> a[i];
	    int i = n * k - p;
	    while(k--) {
	        sum += a[i];
	        i -= p;
	    }
	    cout << sum << endl;
	}

}
