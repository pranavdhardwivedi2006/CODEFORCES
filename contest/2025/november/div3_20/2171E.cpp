#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> two, three, other;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) two.push_back(i);
        else if(i % 3 == 0) three.push_back(i);
        else other.push_back(i);
    }
    vector<int> ans; 
    int o = 0, t = 0, ot = 0;
    int n1 = two.size(), n2 = three.size(), n3 = other.size();
    while(o < n1 || t < n2 || ot < n3) {
        if(ot < n3) ans.push_back(other[ot++]);
        if(o < n1) {
            ans.push_back(two[o++]);
            if(o < n1) ans.push_back(two[o++]);
        }
        else {
            if(t < n2) ans.push_back(three[t++]);
            if(t < n2) ans.push_back(three[t++]);
        }
    }
    for(auto it : ans) cout << it << " "; cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
