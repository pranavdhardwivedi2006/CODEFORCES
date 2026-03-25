#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n, k; cin >> n;
    long long sum = 0, curr = 0;
    vector<vector<int>> a(n, vector<int>(2, 0));
    for(auto& it : a) {cin >> it[0]; sum += it[0];}
    for(int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        a[--u][1]++; a[--v][1]++;
    }
    sort(a.rbegin(), a.rend());
    cout << sum << " "; int j = 0;
    for(int i = 1; i < n - 1; i++) {
        while(a[j][1] <= 1) j++;
        sum += a[j][0]; a[j][1]--;
        cout << sum << " ";
    }
    cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}