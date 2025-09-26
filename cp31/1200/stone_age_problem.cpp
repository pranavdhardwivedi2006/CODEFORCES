#include<bits/stdc++.h>
using namespace std;

long long sum = 0;

void one(vector<pair<int, int>>& a, int& t, int& x)  {
    int i,k;
    cin >> i >> k;
    if(t != a[i-1].second) {
        a[i-1].first = x;
        a[i-1].second = t;
    }
    if(a[i-1].first >= k) sum -= (a[i-1].first - k);
    else sum += (k - a[i-1].first);
    a[i-1].first = k;
    cout << sum << endl;
}

void two(int n, int& t, int i, int& x) {
    int k;
    cin >> k;
    t = i;
    x = k;
    sum = 1LL * k * n;
    cout << sum << endl;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n, {0, k});
    for(int i = 0; i < n; i++) cin >> a[i].first;
    for(int i = 0; i < n; i++) sum += a[i].first;
    int t = k, x = 0;
    while(k--) {
        int p;
        cin >> p;
        if(p == 1) one(a, t, x);
        else two(n, t, k, x);
    }

}