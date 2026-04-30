#include <bits/stdc++.h>
using namespace std;

long long power(long long x, long long y) {
    if(y == 0) return 1;
    long long mult = power(x, y / 2);
    mult = mult * mult;
    if(y & 1) mult = mult * x;
    return mult;
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    int maxi = *max_element(a.begin(), a.end()) + 1;
    vector<array<int, 2>> factors(maxi, {100, 100});
    vector<int> count(maxi);
    for(auto it : a) {
        for(int i = 2; i * i <= it; i++) {
            int cnt = 0;
            while(it % i == 0) {
                it /= i; cnt++;
            }
            if(cnt) {
                count[i]++;
                if(cnt <= factors[i][0]) {
                    factors[i][1] = factors[i][0];
                    factors[i][0] = cnt;
                } else if(cnt < factors[i][1]) {
                    factors[i][1] = cnt;
                }
            }
        }
        if(it > 1) {
            if(1 <= factors[it][0]) {
                factors[it][1] = factors[it][0];
                factors[it][0] = 1;
            } else if(1 < factors[it][1]) {
                factors[it][1] = 1;
            }
            count[it]++;
        }
    }
    long long ans = 1;
    for(int i = 2; i < maxi; i++) {
        if(count[i] == n) {
            int total = factors[i][1];
            ans *= power(i, total);
        }
        if(count[i] == n - 1) {
            int total = factors[i][0];
            ans *= power(i, total);
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}