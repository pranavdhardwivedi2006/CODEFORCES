#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    map<int, int> mpp; 
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        mpp[x]++;
    }

    vector<int> b(m), z; for(auto &x : b) cin >> x;
    vector<pair<int, int>> arr;

    for(int i = 0; i < m; i++) {
        int k; cin >> k;
        if(k) arr.push_back({b[i], k});
        else z.push_back(b[i]);
    }
    sort(arr.begin(), arr.end());

    int non_zero = -1;
    for(int i = 0; i < arr.size(); i++) {
        int val = arr[i].first, c = arr[i].second;
        auto it = mpp.lower_bound(val); 
        if(it != mpp.end()) {
            if(it->first < c) {
                if(it->second == 1) mpp.erase(it);
                else it->second--;
                mpp[c]++;
            }  
        }     
        else {
            break;
        }
        non_zero = i + 1;
    }

    int zero = 0, j = 0;
    for(auto it : mpp) {
        for(int i = 0; i < it.second; i++) {
            if(j < z.size() && it.first >= z[j]) {
                zero++;
                j++;
            }
            else break;
        }
    }

    cout << non_zero + zero << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
    
}
    