#include <bits/stdc++.h>
using namespace std;

bool palindrome(int k, vector<int>& arr) {
    vector<int> temp;
    for(auto it : arr) if(it != k) temp.push_back(it);
    int l = 0, r = temp.size() - 1;
    while(l < r) if(temp[l++] != temp[r--]) return false;
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), trk;
    map<int, int> mpp;
    for(int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = n - 1;
    while(l <= r) {
        if(a[l] != a[r]) break;
        l++,r--;
    } 
    if(l > r) cout << "YES" << endl;
    else {
        bool flag = false;
        if(palindrome(a[l], a)) flag = true;
        if(palindrome(a[r], a)) flag = true;
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    } 
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
