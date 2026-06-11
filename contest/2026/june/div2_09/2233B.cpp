#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    if(n & 1) {
        int a = n - 2, b = n - 1, c = n;
        cout << a << " " << a << " " << b << " " << a << " ";
        cout << b << " " << c << " " << a << " " << c << " ";
        cout << c << " " << b << " " << b << " " << c << " ";
        n -= 3;
    }
    for(int i = 1; i <= n; i += 2) {
        cout << i << " " << i + 1 << " " << i + 1 << " " << i << " ";
        cout << i << " " << i + 1 << " " << i << " " << i + 1 << " ";
    }
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}