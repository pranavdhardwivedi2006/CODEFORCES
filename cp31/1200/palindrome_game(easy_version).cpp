#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int z = 0;
    for(auto it : s) {
        if(it == '0') z++;
    }
    if(z % 2 == 0 || z == 1) cout << "BOB" << endl;
    else cout << "ALICE" << endl;
}

int main() { 
	int t;
	cin >> t;
	while(t--) solve();

}