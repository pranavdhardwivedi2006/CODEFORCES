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
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    int ans = 0, i = 0; 
    stack<int> st; 
    while(i < n) {
        while(!st.empty() && a[i] - st.top() != 1) st.pop();
        if(st.empty()) ans++; st.push(a[i++]);
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}