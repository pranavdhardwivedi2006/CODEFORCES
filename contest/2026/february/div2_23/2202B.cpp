#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    if((n & 1) && s[0] == 'b') {no return ;}
    int idx = (n & 1) ? 1 : 0; 
    for(; idx < n; idx += 2) {
        if(s[idx] == '?' && s[idx+1] == '?') continue ;
        if(s[idx] == s[idx+1]) {no return ;}
    }
    yes
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}