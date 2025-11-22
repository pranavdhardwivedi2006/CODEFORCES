#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, a, b; cin >> a >> b >> n;
    if(n * b > a && a != b) cout << 2 << endl;
    else cout << 1 << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}