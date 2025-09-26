#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(vector<int>& arr, int n) {
    if(n == 1) return arr[0] == 1 ? true : false; 
    if(arr[1] != 1) return false;
    ll sum = 2;
    for(int i = 2; i < n; i++) {
        if(arr[i] > sum) return false;
        sum += arr[i];
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    if(check(a, n)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
