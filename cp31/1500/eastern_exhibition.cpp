#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

int find(vector<int>& arr) {
    int n = arr.size();
    if(n & 1) return 1;
    return arr[n / 2] - arr[n / 2 - 1] + 1; 
}


void solve() {
    int n, k; cin >> n;
    vector<int> x(n), y(n);
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    if(x[0] == x[n-1] || y[0] == y[n-1]) {
        cout << max(x[n-1] - x[0] + 1, y[n-1] - y[0] + 1) << endl;
        return ;
    }
    cout << 1LL * find(x) * find(y) << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}