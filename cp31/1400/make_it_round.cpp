#include <bits/stdc++.h>
using namespace std;

int two(int n) {
    int cnt = 0;
    while(n % 2 == 0) {
        cnt++;
        n /= 2;
    }
    return cnt;
}

int five(int n) {
    int cnt = 0;
    while(n % 5 == 0) {
        cnt++;
        n /= 5;
    }
    return cnt;
}

void solve() {
    long long n, m; cin >> n >> m;
    int cnt2 = two(n);
    int cnt5 = five(n);
    if(cnt2 < cnt5) {
        cnt5 -= cnt2;
        while(m > 2 && cnt5--) {
            n *= 2;
            m /= 2;
        }
    }
    else {
        cnt2 -= cnt5;
        while(m > 5 && cnt2--) {
            n *= 5;
            m /= 5;
        }
    }
    while(m > 10) {
        n *= 10;
        m /= 10;
    }
    n *= m;
    cout << n << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
