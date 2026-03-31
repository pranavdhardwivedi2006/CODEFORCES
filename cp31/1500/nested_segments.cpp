#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int n, k = 1; cin >> n;
    vector<array<int, 3>> a(n);
    for(auto& it : a) {
        cin >> it[0] >> it[1];
        it[2] = k++;
    }
    sort(a.begin(), a.end());
    int prev = 0;
    for(int i = 1; i < n; i++) {
        if(a[i][0] == a[prev][0]) {
            cout << a[prev][2] << " " << a[i][2] << endl;
            return ;
        }
        if(a[i][1] <= a[prev][1]) {
            cout << a[i][2] << " " << a[prev][2] << endl;
            return ;
        }
        prev = i;
    }
    cout << "-1 -1\n";
    
}

int main() {
	solve();

}