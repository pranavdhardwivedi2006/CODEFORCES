#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int w = 0;
    for(int i = 0; i < k; i++) if(s[i] == 'W') w++;
    int del = w;
    for(int i = 0; i < n - k; i++) {
        if(s[i] == 'W') w--;
        if(s[i+k] == 'W') w++;
        del = min(del, w);
    }
    cout << del << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
