#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n; cin >> n;
    unordered_set<int> st;
    for(int i = 0; i < n; i++) {
        int k; cin >> k;
        st.insert(k);
    }
    vector<int> a(n + 1, INT_MAX);
    for(int i = 1; i <= n; i++) {
        if(st.find(i) != st.end()) a[i] = 1;
        else {
            for(int j = 2; j * j <= i; j++) {
                if(i % j) continue ;
                if(a[j] != INT_MAX && a[i/j] != INT_MAX) {
                    a[i] = min(a[i], a[j] + a[i/j]);
                }
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << (a[i] == INT_MAX ? -1 : a[i]) << " ";
    }
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
