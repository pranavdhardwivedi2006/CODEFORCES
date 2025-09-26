#include <bits/stdc++.h>
using namespace std;

void sol(vector<int> &arr, int n){
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) mpp[arr[i]]++;
    int cnt = 0;
    vector<int> check;
    for (auto it = mpp.begin(); it != mpp.end(); it++){
        cnt++;
        if (cnt > 2) break;
        check.push_back(it->second);
    }
    if (cnt > 2) cout << "NO" << endl;
    else {
        if (cnt == 1) cout << "YES" << endl;
        else {
            if (abs(check[0] - check[1]) >= 2) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        sol(arr, n);
    }
}