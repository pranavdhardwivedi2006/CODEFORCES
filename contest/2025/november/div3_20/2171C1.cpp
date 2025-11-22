#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto& it : a) cin >> it;
    for(auto& it : b) cin >> it;
    int i = n - 1, one = 0;
    for(auto it : a) if(it == 1) one++;
    for(auto it : b) if(it == 1) one++;
    while(i >= 0 && a[i] == b[i]) i--;
    if(!(one & 1)) cout << "Tie" << endl;
    else if(i & 1) cout << "Mai" << endl;
    else cout << "Ajisai" << endl;
    
}

int main() {
	int t; cin >> t;
	while(t--) solve();
}
