#include <bits/stdc++.h>
using namespace std;

bool check(vector<vector<char>>& arr, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 3; j++) {
            if(arr[i][j] == arr[i][j+1] && arr[i][j] == arr[i][j+2] && arr[i][j] == '#') return true;
        }
    }
    for(int i = 0; i < n - 3; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == arr[i+1][j] && arr[i][j] == arr[i+2][j] && arr[i][j] == '#') return true;
        }
    }
    return false;
}

bool check2(vector<vector<char>>& arr, vector<vector<bool>>& vis, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == '#' && !vis[i][j]) return false;
        }
    }
    return true;
}

bool check3(vector<vector<char>>& arr, int n, int l, int r) {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == '#') cnt++;
        }
    }
    if(cnt == 4 && l + 1 < n && r + 1 < n && arr[l+1][r] == arr[l][r+1] && arr[l+1][r] == arr[l+1][r+1] && arr[l+1][r] == '#') return true;
    return false;
}

bool one(vector<vector<char>>& arr, int n, int l, int r) {
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    int i = l, j = r; bool f = true;
    while(i >= 0 && j >= 0) {
        vis[i][j] = true;
        f ? j-- : i--;
        f = !f;
    } i = l, j = r, f = true;
    while(i < n && j < n) {
        vis[i][j] = true;
        f ? i++ : j++;
        f = !f;
    }
    return check2(arr, vis, n); 
}

bool two(vector<vector<char>>& arr, int n, int l, int r) {
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    int i = l, j = r; bool f = true;
    while(i < n && j >= 0) {
        vis[i][j] = true;
        f ? j-- : i++;
        f = !f;
    } i = l, j = r, f = true;
    while(i >= 0 && j < n) {
        vis[i][j] = true;
        f ? i-- : j++;
        f = !f;
    }
    return check2(arr, vis, n); 
}

bool three(vector<vector<char>>& arr, int n, int l, int r) {
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    int i = l, j = r; bool f = true;
    while(i >= 0 && j >= 0) {
        vis[i][j] = true;
        f ? i-- : j--;
        f = !f;
    } i = l, j = r, f = true;
    while(i < n && j < n) {
        vis[i][j] = true;
        f ? j++ : i++;
        f = !f;
    }
    return check2(arr, vis, n); 
}

bool four(vector<vector<char>>& arr, int n, int l, int r) {
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    int i = l, j = r; bool f = true;
    while(i < n && j >= 0) {
        vis[i][j] = true;
        f ? i++ : j--;
        f = !f;
    } i = l, j = r, f = true;
    while(i >= 0 && j < n) {
        vis[i][j] = true;
        f ? j++ : i--;
        f = !f;
    }
    return check2(arr, vis, n); 
}

void solve() {
    int n; cin >> n;
    vector<vector<char>> arr(n, vector<char>(n));
    for(auto& it : arr) for(auto& c : it) cin >> c;
    int l = -1, r = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == '#') {
                l = i, r = j;
                goto x;
            }
        }
    } x :
    if(l == -1 || check3(arr, n, l, r)) {
        cout << "YES" << endl;
        return ;
    }
    if(check(arr, n)) {
        cout << "NO" << endl;
        return ;
    }
    bool flag = one(arr, n, l, r) | two(arr, n, l, r) | three(arr, n, l, r) | four(arr, n, l, r);
    string s = flag ? "YES" : "NO";
    cout << s << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();
}
