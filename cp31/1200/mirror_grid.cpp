#include<bits/stdc++.h>
using namespace std;

int count(int i, int j, int n, vector<vector<char>>& grid) {
    int one = 0; 
    if(grid[i][j] == '1') one++;
    if(grid[j][n-i-1] == '1') one++;
    if(grid[n-j-1][i] == '1') one++;
    if(grid[n-i-1][n-j-1] == '1') one++;
    return min(4 - one, one);
}

void solve() {
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n, '0'));
    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    int ans = 0;
    for(int i = 0; i < n / 2; i++) {
        for(int j = 0; j < (n + 1) / 2; j++) {
            ans += count(i, j, n, grid);
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();

}