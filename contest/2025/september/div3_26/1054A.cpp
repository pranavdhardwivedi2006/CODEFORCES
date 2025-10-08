#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    int zero = 0, minus = 0;
    for(auto& it : a) {
        if(it == 0) zero++;
        if(it == -1) minus++;
    }
    cout << zero + (minus & 1) * 2 << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
