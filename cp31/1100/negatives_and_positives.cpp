#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, neg = 0, min = INT_MAX;
    long long sum = 0;
    cin >> n;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] < 0) neg++;
        min = std::min(min, abs(a[i]));
        sum += abs(a[i]);
    }
    if(neg & 1) sum -= 2 * min;
    cout << sum << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}