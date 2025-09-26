#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    vector<int> trk(30, 0);
    for(auto it : a) {
        for(int i = 0; i < 30; i++) {
            trk[i] += (it & 1);
            it = it >> 1;
        }
    }
    int k = *min_element(trk.begin(), trk.end());
    for(int i = 1; i <= n; i++) {
        bool flag = true;
        for(int j = 0; j < 30; j++) {
            if(trk[j] && trk[j] % i) {
                flag = false;
                break;
            }
        }
        if(flag) cout << i << " ";
    }
    cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
