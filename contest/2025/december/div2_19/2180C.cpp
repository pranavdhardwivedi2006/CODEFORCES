#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n, k; cin >> n >> k;
    vector<bool> tight(k, 1), bit(32, 0);
    vector<vector<bool>> a(k, vector<bool>(32, 0));
    if(k & 1) {
        for(int i = 1; i <= k; i++) cout << n << " ";
        cout << endl; return ;
    }
    int x = n;
    for(int i = 31; i >= 0; i--) {
        bit[i] = x & 1;
        x >>= 1;
    }
    for(int i = 0; i < 32; i++) {
        if(bit[i] == 0) {
            int p = x / 2 * 2;
            for(int j = 0; j < k && p--; j++) a[j][i] = 1;
        }
        else {
            bool mark = true;
            for(int j = 0; j < k; j++) {
                if(tight[j] && mark) mark = tight[j] = false, x++;
                else a[j][i] = 1;
            }
            if(mark) a[k-1][i] = 0;
        }
    }
    for(auto& it : a) {
        int k = 0;
        for(auto x : it) {
            k <<= 1; k += x;
        }
        cout << k << " ";
    }
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
