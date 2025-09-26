#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,k,b,s;
    cin >> n >> k >> b >> s;
    long long p = s - k * b;
    long long t = 0;
    if(k > 1) t = p / (k - 1);
    else t = p / k;
    if(p % (k - 1) && k > 1) t++;
    if(t > n || s < k * b) {
        x : cout << -1 << endl;
        return ;
    }
    y : vector<long long> a(n, 0);
    a[0] += k * b;
    s -= k * b;
    for(int i = 0; i < n && s > 0; i++) {
        if(k - 1 <= s) a[i] += k - 1;
        else a[i] += s;
        s -= k - 1;
    }
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}
