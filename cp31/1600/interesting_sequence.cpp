#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fill(ll n, int* a) {
    int i = 63;
    while(n) {
        if(n & 1) a[i] = 1;
        n >>= 1; i--;
    }
}

void solve() {
    ll n, x; cin >> n >> x;
    int a[64] = {0}, b[64] = {0}, ans[64] = {0};
    fill(n, a); fill(x, b); int i = 0; 
	unsigned long long m = 0;
    while(i < 64) {
        if(a[i] != b[i]) {
            if(a[i-1] != 0) {cout << -1 << endl; return ;}
            ans[i-1] = 1;
            break;
        } else ans[i] = a[i]; i++;
    }
    while(i < 64) if(b[i++] == 1) {cout << -1 << endl; return ;}
    for(int i = 63; i >= 0; i--) m |= ans[i] * 1LL << (63 - i);
    cout << m << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}