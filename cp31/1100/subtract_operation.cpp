#include <bits/stdc++.h>
using namespace std;

bool solve() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int l = 0, r = 1;
    while(r < n) {
        if(a[r] - a[l] == k) return true;
        if(a[r] - a[l] > k) l++;
        else r++;
    }
    return false;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    if(solve()) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}

}