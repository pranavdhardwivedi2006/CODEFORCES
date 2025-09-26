#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    if(n == 1) {
        cout << 1 << endl;
        return ;
    }
    vector<int> ans;
    for(int i = 0; i < n - 1; i++) {
        int k = a[i+1] - a[i];
        if(k) ans.push_back(k);
    }
    int i = 0, cnt = 1;
    int k = ans.size();
    while(i < k) {
        if(ans[i] > 0) while(i < k && ans[i] > 0) i++;
        else while(i < k && ans[i] < 0) i++;
        cnt++;
    }
    cout << cnt << endl; 
} 

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
