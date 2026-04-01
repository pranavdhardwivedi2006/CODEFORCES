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
    vector<array<int, 2>> a(n);
    for(auto& it : a) cin >> it[0] >> it[1];
    sort(a.begin(), a.end());
    array<int, 2> arr[2] = {{-1, -1}, {-1, -1}};
    for(auto it : a) {
        if(arr[0][1] < it[0]) {
            arr[0] = it;
        } else if(arr[1][1] < it[0]) {
            arr[1] = it;
        } else {
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
}

int main() {
	solve();

}