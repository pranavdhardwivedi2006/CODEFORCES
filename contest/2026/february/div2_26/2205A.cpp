#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n, k; cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    int find = false, idx = -1;
    for(int i = 0; i < n; i++) {
        if(a[i] == n) {
            swap(a[i], a[0]);
        }
    }
    for(auto it : a) cout << it << " ";
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}