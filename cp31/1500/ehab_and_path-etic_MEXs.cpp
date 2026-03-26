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
    vector<array<int, 2>> arr(n - 1); 
    vector<int> trk(n + 1);
    for(auto& it : arr) {
        cin >> it[0] >> it[1];
        trk[it[0]]++, trk[it[1]]++;
    }
    int l = 0, r = n - 2;
    for(auto& it : arr) {
        if(trk[it[0]] == 1 || trk[it[1]] == 1) cout << l++ << endl;
        else cout << r-- << endl;
    }    
}

int main() {
	solve();

}