#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n;
    int l = 1, r = n;
    while(l < r) {
        int mid = (l + r) >> 1; 
        cout << "? " << l << " " << mid << endl; 
        cout.flush(); n = mid - l + 1;
        int internal = 0, external = 0; 
        for(int i = 0; i < n; i++) {
            int k; cin >> k;
            if(l <= k && k <= mid) internal++;
            else external++;
        }
        if((n - external) & 1) r = mid;
        else l = mid + 1;
    }
    cout << "! " << l << endl; cout.flush();
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}