#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    for(int i = 2; i < n; i++) {
        int k = i * i;
        int res = k + i + 1;
        if(n < res) break;
        while(n >= res) {
            if(n - res == 0) {
                cout << "YES" << endl;
                return ;
            }
            k *= i;
            res += k;
        }
    }
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();

}