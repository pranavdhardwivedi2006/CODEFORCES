#include <bits/stdc++.h>
using namespace std;

void bit(int n, vector<int>& trk) {
    for(int i = 0; i < 32; i++) {
        trk[i] = n & 1;
        n = n >> 1;
    }
}

bool solve() {
    int n,k;
    cin >> n >> k;
    vector<int> num(32, 0);
    bit(k, num);
    vector<int> check = num;
    for(int z = 0; z < 3; z++) {
        bool flag = false;
        vector<int> a(n, 0);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(auto it : a) {
            vector<int> trk(32, 0);
            bit(it, trk);
            for(int i = 0; i < 32; i++) {
                if(num[i] == 0 && trk[i] == 1) {
                    flag = true;
                    break;
                }
            }
            if(flag) break;
            for(int i = 0; i < 32; i++) {
                if(trk[i] == 1) num[i] = 2;
            }
        }
    }
    for(int i = 0; i < 32; i++) {
        if(check[i]) if(num[i] != 2) return false;
    }
    return true;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve() ? cout << "YES" << endl : cout << "NO" << endl;

}
