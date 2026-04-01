
#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n; cin >> n;
    vector<int> a(n); 
    for(auto& it : a) cin >> it;
    int cnt = 1e9, one = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 1) one++;
        int gc = 0;
        for(int j = i; j < n; j++) {
            gc = gcd(gc, a[j]);
            if(gc == 1) {
                cnt = min(cnt, j - i);
                break;
            }
        }
    }
    if(one) cout << n - one << endl;
    else if(cnt == 1e9) cout << -1 << endl;
    else cout << cnt + n - 1 << endl;
}

int main() {
	solve();

}