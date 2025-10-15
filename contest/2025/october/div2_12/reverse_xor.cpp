#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, cnt = 0; cin >> n;
    if(n == 0) {
        cout << "YES" << endl;
        return ;
    }
    vector<int> a;
    while(n) {
        a.push_back(n & 1);
        n >>= 1;
    }
    reverse(a.begin(), a.end());
    for(auto& it : a) if(it) cnt++;
    n = a.size(); 
    for(int i = 0; i < n; i++) {
        if(a[i] == 1) continue;
        int l = i, r = i; bool mid = true;
        while(l >= 0 && r < n) {
            if(a[l] != a[r]) goto y;
            l--, r++;
        }
        if(l >= 0) continue;
        while(r < n) if(a[r++] != 0) mid = false;
        if(mid) {
            cout << "YES" << endl;
            return ;
        }
        y :
    }
    for(int i = 0; i < n - 1; i++) {
        int l = i, r = i + 1; bool mid = true;
        while(l >= 0 && r < n) {
            if(a[l] != a[r]) goto z;
            l--, r++;
        }
        if(l >= 0) continue;
        while(r < n) if(a[r++] != 0) mid = false;
        if(mid) {
            cout << "YES" << endl;
            return ;
        }
        z :
    }
    cout << "NO" << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}