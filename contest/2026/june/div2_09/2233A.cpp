#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y, z; cin >> n >> x >> y >> z;
    int comb = (x + y);
    int first = n / comb;
    if(n % comb) first++;
    int second = INT_MAX;
    if(n > z * x) {
        second = z;
        n -= z * x;
        comb = x + 10 * y;
        second += n / comb;
        if(n % comb) second++;
    }
    cout << min(first, second) << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}