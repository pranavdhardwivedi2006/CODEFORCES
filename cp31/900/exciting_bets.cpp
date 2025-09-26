#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin >> a >> b;
        if(a == b) cout << 0 << " " << 0 << endl;
        else if(a == 0 || b == 0) cout << max(a, b) << " " << 0 << endl;
        else cout << abs(a-b) << " " << min(abs(a-b) - a % abs(a-b), a % abs(a-b)) << endl;
    }
}