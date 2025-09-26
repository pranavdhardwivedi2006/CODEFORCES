#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        a[i] = {k, i + 1};
    }
    sort(a.begin(), a.end());
    if(a[0].first == a[n-1].first) {
        cout << "NO" << endl;
        return ;
    }
    cout << "YES" << endl;
    int i = 1;
    while(i < n && a[i].first == a[0].first) i++;
    for(int j = 1; j < i; j++) {
        cout << a[j].second << " " << a[i].second << endl;
    }
    for(int j = i; j < n; j++) {
        cout << a[0].second << " " << a[j].second << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();

}