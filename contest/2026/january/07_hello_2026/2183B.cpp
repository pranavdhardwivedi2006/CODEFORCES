#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    set<int> st; int i = 0, j = 0;
    while(i < n) {
        if(a[i] <= k) st.insert(a[i]);
        if(st.size() == k) {
            auto it = prev(st.end());
            st.erase(it);
        }
        i++;
    }
    vector<int> arr(st.begin(), st.end());
    for(i = 0; i <= n && j < arr.size(); i++) {
        if(i != arr[j++]) {
            cout << i << endl;
            return ;
        }
    }
    cout << i << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
