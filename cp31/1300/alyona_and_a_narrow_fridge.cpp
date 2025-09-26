#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,h;
    cin >> n >> h;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    int l = 1, r = n, ans = 1;
    while(l <= r) {
        int mid = (l + r) / 2;
        vector<int> temp(mid);
        for(int i = 0; i < mid; i++) temp[i] = a[i];
        sort(temp.begin(), temp.end());
        long long x = 0;
        for(int i = mid - 1; i >= 0; i -= 2) x += temp[i];
        if(x <= h) {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << ans << endl;
}
