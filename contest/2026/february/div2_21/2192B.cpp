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
    vector<int> a, b;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') b.push_back(i+1);
        else a.push_back(i+1);
    }
    if(!a.size()) cout << 0 << endl;
    else if(a.size() % 2 == 0) {
        cout << a.size() << endl;
        for(auto& it : a) cout << it << " ";
        cout << endl;
    }
    else if(b.size() & 1) {
        cout << b.size() << endl;
        for(auto& it : b) cout << it << " ";
        cout << endl;
    }
    else cout << -1 << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}