#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a; cin >> n >> a;
    vector<int> arr(n);
    for(auto& it : arr) cin >> it; 
    sort(arr.begin(), arr.end());
    if(a < arr[0]) {
        cout << arr[0] << endl;
        return ;
    }
    int ans = 0, maxi = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < a && maxi < i + 1) {
            maxi = i + 1;
            ans = arr[i];
        }
        else if(arr[i] > a && maxi < n - i) {
            maxi = n - i;
            ans = arr[i];
        }
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
