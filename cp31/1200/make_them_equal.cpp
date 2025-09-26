#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    bool flag = true;
    for(auto it : s) if(it != c) flag = false;
    if(flag) cout << 0;
    else {
        int i = n - 1;
        while(i >= 0 && s[i] != c) i--;
        if((i + 1) * 2 <= n) cout << 2 << endl << n << " " << n - 1;
        else cout << 1 << endl << i + 1;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();

}