#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    map<int, vector<int>> mpp;
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        mpp[k].push_back(i);
    }
    vector<int> ans;
    for(auto it : mpp) {
        vector<int> temp;
        temp.push_back(it.second[0]);
        for(int i = 0; i < it.second.size() - 1; i++) {
            temp.push_back(it.second[i+1] - it.second[i] - 1);
        }
        temp.push_back(n - it.second.back() - 1);
        sort(temp.begin(), temp.end(), greater<int>());
        ans.push_back(max(temp[0] / 2, temp[1]));
    } 
    cout << *min_element(ans.begin(), ans.end()) << endl;
} 

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
