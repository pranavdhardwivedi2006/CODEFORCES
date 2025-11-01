#include <bits/stdc++.h>
using namespace std;

int mex(vector<int>& a) {
    int me = 0;
    for(auto it : a) if(me == it) me++;
    return me;
}

vector<int> find(vector<int>& a) {
    int me = mex(a), n = a.size();
    vector<int> temp(n);
    for(int i = 0; i < n; i++) {
        if(a[i] > me) temp[i] = me;
        else if(i > 0 && i < n - 1 && a[i] != a[i-1] && a[i] != a[i+1]) temp[i] = a[i];
        else if(!i && a[i] != a[i+1]) temp[i] = a[i];
        else if(i == n - 1 && a[i] != a[i-1]) temp[i] = a[i];
        else temp[i] = me;
    }
    return temp;
}

void print(vector<int>& a) {
    long long sum = 0;
    for(auto& it : a) sum += it;
    cout << sum << endl;
}

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    sort(a.begin(), a.end());
    if(k == 0) print(a);
    else {
        a = find(a);
        if(k == 1) print(a);
        else {
            sort(a.begin(), a.end());
            vector<int> arr2 = find(a);
            vector<int> arr3 = find(arr2);
            if(k & 1) print(arr3);
            else print(arr2);
        }
    }
}

int main() {
	int t; cin >> t;
	while(t--) solve();
}
