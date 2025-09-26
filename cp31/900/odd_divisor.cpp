#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, cnt = 0;
        cin >> n;
        while(n) {
            if(n & 1) cnt++;
            n = n >> 1;
        }
        if(cnt > 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}