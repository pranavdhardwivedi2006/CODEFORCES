#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    set<int> s;
    for(int i = 1; i <= n; i++) {
        s.insert(i);
    }
    int l = 0, r = n - 1;
    while(l < r) {
        int x = *s.begin();
        int y = *s.rbegin();
        if(a[l] == x || a[l] == y) {
            s.erase(a[l]);
            l++;
        }
        else if(a[r] == x || a[r] == y) {
            s.erase(a[r]);
            r--;
        } 
        else {
            cout << l + 1 << " " << r + 1 << endl;
            return ;
        } 
    }
    cout << -1 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}