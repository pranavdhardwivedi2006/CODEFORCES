#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n, k; cin >> n;
    string s; cin >> s;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'L') {
            cout << i + 1 << endl;
            return ;
        }
    }
    
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}