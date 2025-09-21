#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y; cin >> x >> y;
    if(x == y) cout << -1 << endl;
    else if(y == 1 || (x - 1 == y)) cout << -1 << endl; 
    else {
        if(x < y) cout << 2 << endl;
        else cout << 3 << endl;
    }
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}