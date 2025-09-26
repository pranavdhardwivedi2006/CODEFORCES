#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,x,y; cin >> n >> x >> y;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int k; cin >> k;
        if(k & 1) cnt++;
    }
    if(cnt & 1) {
        if(y & 1) {
            if(x & 1) cout << "Bob" << endl;
            else cout << "Alice" << endl;
        }
        else {
            if(x & 1) cout << "Alice" << endl;
            else cout << "Bob" << endl;
        }
    }
    else {
        if(y & 1) {
            if(x & 1) cout << "Alice" << endl;
            else cout << "Bob" << endl;
        }
        else {
            if(x & 1) cout << "Bob" << endl;
            else cout << "Alice" << endl;
        }
    }
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
