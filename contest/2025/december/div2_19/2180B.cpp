#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n; cin >> n;
    vector<string> a(n);
    for(auto& it : a) cin >> it;
    string s;
    for(auto it : a) {
        if(s + it < it + s) s += it; 
        else s = it + s;
    } 
    cout << s << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}