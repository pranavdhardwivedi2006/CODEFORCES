#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,l,r;
    cin >> n >> l >> r;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++) {
        if(l % (i + 1) == 0) a[i] = l;
        else {
            int k = i + 1 - l % (i + 1);
            if(l + k <= r) a[i] = l + k;
            else {
                cout << "NO" << endl;
                return ;
            }
        }
    }
    cout << "YES" << endl;
    for(auto it : a) cout << it << " ";
    cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}
