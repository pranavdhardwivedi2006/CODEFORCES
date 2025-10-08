#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j + i <= n) {
                cout << j << " " << j + i << endl; cout.flush();
                int x; cin >> x;
                if(x == 1) goto y;
            }
            else break;
        }
    }
    y : cout.flush();
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}