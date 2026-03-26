#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    for(int i = 0; i < k; i++) {
        char c = '?';
        for(int j = i; j < n; j += k) {
            if(c == '?') {
                if(s[j] != '?') c = s[j];
            }
            else {
                if(s[j] != '?' && s[j] != c) {
                    cout << "NO" << endl;
                    return ;
                }
            }
        }
        for(int j = i; j < n; j += k) s[j] = c;
    }
    int z = 0, o = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') z++;
        if(s[i] == '1') o++;
        if(i >= k) {
            if(s[i-k] == '0') z--;
            if(s[i-k] == '1') o--;
            
        } 
        if(o > k / 2 || z > k / 2) {
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}