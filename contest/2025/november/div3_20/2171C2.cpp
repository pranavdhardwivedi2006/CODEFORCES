#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto& it : a) cin >> it;
    for(auto& it : b) cin >> it;
    for(int i = 20; i >= 0; i--) {
        int k = 1 << i, cnt = 0;
        for(auto it : a) if(k & it) cnt++; 
        for(auto it : b) if(k & it) cnt++; 
        if(cnt & 1) {
            for(int j = n - 1; j >= 0; j--) {
                bool left = k & a[j];
                bool right = k & b[j];
                if(left != right) {
                    if(j & 1) cout << "Mai" << endl;
                    else cout << "Ajisai" << endl;
                    return ;
                }
            }
        }
    }
    cout << "Tie" << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();
}
