#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int k = (3 - n % 3) % 3;
    cout << k << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}