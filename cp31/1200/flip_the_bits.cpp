#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string a,b;
    cin >> n >> a >> b;
    int zero = 0, one = 0;
    for(auto it : a) {
        if(it == '0') zero++;
        else one++;
    }
    bool even = true;
    for(int i = n - 1; i >= 0; i--) {
        if(one == zero) {
            if(even) {
                if(a[i] != b[i]) even = !even;
            }
            else {
                if(a[i] == b[i]) even = !even;
            }
        }
        else {
            if(even) {
                if(a[i] != b[i]) {
                    cout << "NO" << endl;
                    return ;
                }
            }
            else {
                if(a[i] == b[i]) {
                    cout << "NO" << endl;
                    return ;
                }
            }
        }
        if(a[i] == '0') zero--;
        else one--;
    }
    cout << "YES" << endl;
    
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
