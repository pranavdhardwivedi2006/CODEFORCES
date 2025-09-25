#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, a, b, k = 1; cin >> n >> a >> b;
    if(n == 1 || b == 1) {
        cout << "YES" << endl;
        return ;
    }
    if(a == 1) {
        if(n % b == 1 && n > b) cout << "YES" << endl;
        else cout << "NO" << endl;
        return ;   
    }
    if(n % b == 1 && n > b) {
        cout << "YES" << endl; 
        return ;
    }
    while(k <= n) {
        long long x = n - k;
        if(x % b == 0) {
            cout << "YES" << endl;
            return ;
        }
        k *= a;
    }
    cout << "NO" << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
