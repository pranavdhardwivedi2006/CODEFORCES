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
    vector<deque<int>> arr(n);
    for(int i = 0; i < n; i++) {
        int m; cin >> m;
        for(int j = 0; j < m; j++) {
            cin >> k; 
            if(arr[i].empty() || arr[i].front() != k) arr[i].push_front(k);
        }
    }
    vector<int> ans; set<int> st;
    for(int i = 0; i < n; i++) {
        sort(arr.begin(), arr.end());
        bool find = true;
        for(auto& it : arr) {
            if(it.empty()) continue ;
            else if(find) {
                find = false;
                while(!it.empty()) {
                    int x = it.front(); it.pop_front();
                    if(!st.count(x)) {
                        st.insert(x); 
                        ans.push_back(x);
                    }
                }
            }
            else {
                it.erase(
                    remove_if(it.begin(), it.end(), [&](int x) {
                        return st.count(x);
                    }),
                    it.end()
                );
            }
        }
    }
    for(auto& it : ans) cout << it << " ";
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}