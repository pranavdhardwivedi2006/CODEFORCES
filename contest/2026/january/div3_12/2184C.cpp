#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007
long long ans, x;
unordered_set<long long> s;

void find(long long n, int st) {
    if(n <= 0 || ans != -1 || s.find(n) != s.end()) return ;
    s.insert(n); if(n == x) ans = st;
    find(n / 2, st + 1);
    if(n & 1) find(n / 2 + 1, st + 1);
}

void solve() {
    long long n; cin >> n >> x;
    if(x == 1) cout << (int) log2(n) << endl;
    else {
        s.clear(); ans = -1; 
        find(n, 0); cout << ans << endl;
    }    
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
