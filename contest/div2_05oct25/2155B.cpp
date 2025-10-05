#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    if(k == n * n - 1) {
        cout << "NO" << endl;
        return ;
    }
    vector<vector<char>> ans(n, vector<char>(n, ' '));
    int i, x = INT_MAX;
    for(i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(!k) {x = j; goto y;}
            ans[i][j] = 'U'; k--;
        }
    }
    y :
    if(x == n - 1) ans[i][x] = 'D';
    else if(x < n - 1) {
        ans[i][x++] = 'R'; ans[i][x++] = 'L';
        while(x < n) ans[i][x++] = 'L';
    }
    i++;
    while(i < n) {
        int j = 0;
        ans[i][j++] = 'R'; ans[i][j++] = 'L';
        while(j < n) ans[i][j++] = 'L';
        i++;
    } 
    cout << "YES" << endl;
    for(auto& it : ans) {
        for(char x : it) cout << x;
        cout << endl;
    }
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}