#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n; cin >> n;
    vector<int> a(n+1);
    vector<bool> trk(n+1, true);
    a[n] = 1; a[n-1] = n;
    trk[1] = trk[n] = false;
    for(int i = n - 2; i > 0; i--) {
        if(a[i+1] + i <= n && trk[a[i+1]+i]) {
            a[i] = a[i+1] + i;
            trk[a[i+1]+i] = false;
        }
        else if(a[i+1] - i > 0 && trk[a[i+1]-i]) {
            a[i] = a[i+1] - i;
            trk[a[i+1]-i] = false;
        }
    }
    for(int i = 1; i <= n; i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
