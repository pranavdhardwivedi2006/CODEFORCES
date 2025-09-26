
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n; cin >> n;
    int first = 0, second = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
        int k; cin >> k;
        if(first >= k && second >= k) {
            if(first <= second) first = k;
            else second = k;
        }
        else if(first >= k) first = k;
        else if(second >= k) second = k;
        else {
            cnt++;
            if(first <= second) first = k;
            else second = k;
        }
    }
    cout << max(cnt - 2, 0) << endl;
}
 
int main() {
	int t; cin >> t;
	while(t--) solve();
 
}