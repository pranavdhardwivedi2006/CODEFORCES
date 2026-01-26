#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int i = 0;
    while(i < n) {
        if(a[i] != n - i) {
            int j = i;
            while(a[j] != n - i) j++;
            while(i < j) swap(a[i++], a[j--]);
            break;
        }
        i++;
    }
    for(auto it : a) cout << it << " ";
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}
