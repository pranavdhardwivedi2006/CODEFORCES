#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    int p = n / k;
    cout << n - p << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
