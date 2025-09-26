#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,w;
    cin >> n >> w;
    vector<int> trk(20, 0), nums(20, 0);
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        trk[log2(x)]++;
    }
    for(int i = 0; i < 20; i++) nums[i] = pow(2, i);
    int height = 0;
    while(1) {
        bool flag = true;
        int k = w;
        for(int i = 19; i >= 0; i--) {
            if(!trk[i]) continue;
            else {
                flag = false;
                while(trk[i] && k - nums[i] > -1) {
                    k -= nums[i];
                    trk[i]--;
                }
            }
        }
        if(flag) break;
        height++;
    }
    cout << height << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}