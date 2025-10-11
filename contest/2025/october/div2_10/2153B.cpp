#include <bits/stdc++.h>
using namespace std;

vector<int> find(int n) {
    vector<int> trk(32, 0);
    for(int i = 0; i < 32; i++) {
        trk[i] = n & 1;
        n >>= 1;
    }
    return trk;
}

void solve() {
    int x, y, z; cin >> x >> y >> z;
    vector<int> x1 = find(x);
    vector<int> y1 = find(y);
    vector<int> z1 = find(z);
    for(int i = 0; i < 32; i++) {
        int k = x1[i] + y1[i] + z1[i];
        if(k == 2) {
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}
