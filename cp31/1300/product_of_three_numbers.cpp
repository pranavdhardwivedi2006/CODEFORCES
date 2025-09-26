#include <bits/stdc++.h>
using namespace std;

int find(int i, int n) {
    for(; 1LL * i * i < n; i++) {
        if(n % i == 0) return i;
    }
    return -1;
}

void solve() {
    int n;
    cin >> n;
    for(int i = 2; 1LL * i * i < n; i++) {
        if(n % i == 0) {
            int k = find(i + 1, n / i);
            if(k != -1) {
                cout << "YES" << endl;
                cout << i << " " << k << " " << n / (i * k) << endl;
                return ;
            }
            break;
        }
    }
    cout << "NO" << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
