#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    long long k = 1;
    for(int i = 0; i < 64; i++) {
        int p = a[0] & 1;
        for(int j = 0; j < n; j++) {
            if((a[j] & 1)!= p) {
                goto x;
            }
            a[j] = a[j] >> 1;
        }
        k++;
    }
    x : k = pow(2, k);
    cout << k << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
