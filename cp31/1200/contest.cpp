#include<bits/stdc++.h> 
using namespace std;



void solve() {
    long long n,m;
    cin >> n >> m;
    long long sum = n * (n + 1) / 2;
    if(m < n) cout << -1 << endl;
    else {
        int r = n;
        set<int> st;
        vector<int> a;
        for(int i = 0; i < n; i++) {
            if(sum - r > n - i - 1) {
                a.push_back(r);
                sum -= r;
                r--;
            } 
            else st.insert(r);
            r--;
        }
        for(auto it : st) a.push_back(it);
        cout << a[0] << endl;
        for(int i = 0; i < a.size() - 1; i++) cout << a[i] << " " << a[i + 1] << endl;

    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
        
}