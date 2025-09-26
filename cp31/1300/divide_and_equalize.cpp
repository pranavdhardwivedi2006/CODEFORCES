#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    map<int, int> mpp;
    long long prod = 1;
    for(auto it : a) {
        int k = it;
        for(int i = 2; i * i <= it; i++) {
            if(k == 1) break;
            while(k % i == 0) {
                k /= i;
                mpp[i]++;
            }
        }
        if(k > 1) mpp[k]++;
    }
    for(auto it : mpp) {
        if(it.second % n)  {
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
    

}