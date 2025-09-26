#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<vector<int>> a;
    map<int, int> mpp;  
    for(int i = 0; i < n; i++) {
        int k; cin >> k;
        vector<int> temp(k);
        for(int j = 0; j < k; j++) {
            cin >> temp[j];
            mpp[temp[j]]++;
        }
        a.push_back(temp);
    }
    for(auto it : a) {
        bool flag = true;
        for(auto x : it) {
            int k = mpp[x];
            if(k == 1) {
                flag = false;
                break;
            }
        }
        if(flag) {
            cout << "YES" << endl;
            return ;
        }
    }
    cout << "NO" << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
