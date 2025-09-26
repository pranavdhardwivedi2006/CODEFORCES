#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mpp[a[i]]++;
    }
    for(int i = 0; i < n; i++) {
        if(mpp[a[i]] == 1) {
            cout << -1 << endl;
            return ;
        }
        b[i] = i;
        if(i > 0 && a[i] == a[i-1]) swap(b[i], b[i-1]);
    }
    for(auto it : b) cout << it + 1 << " ";
    cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
