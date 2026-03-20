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
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    stack<int> st; int i = n - 1;
    while(i >= 0) {
        while(!st.empty() && st.top() < a[i]) st.pop();
        st.push(a[i--]);
    }
    cout << st.size() << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}