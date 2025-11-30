#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, y, r; cin >> n >> y >> r;
    int k = r + y / 2;
    cout << min(k, n) << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}