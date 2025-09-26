#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,h;
    cin >> n >> h;
    h--;
    if(n & 1) {
        int k = n / 2;
        long long ans = 1LL * h / k * (k + 1) + h % k;
        cout << ans % n + 1 << endl;
    }
    else {
        cout << h % n + 1 << endl;
    }
}

int main() {
    int t;
    cin >> t;   
    while(t--) solve();

}