#include <bits/stdc++.h>
using namespace std;
array<pair<int, char>, 26> trk;

int check(int factor, int n) {
    int op = 0; n /= factor;
    for(int i = 0; i < 26 && n--; i++) {
        if(trk[i].first < factor) op += factor - trk[i].first;
    }
    return op;
}

void fill(string& s, int freq, int n) {
    vector<bool> vis(n); int count = n / freq;
    for(int i = 0; i < count; i++) {
        auto [cnt, c] = trk[i];
        int maxi = min(cnt, freq), j = 0;
        while(maxi) {
            if(s[j] == c) vis[j] = true, maxi--;
            j++;
        }
    }
    for(int i = 0; i < count; i++) {
        auto [cnt, c] = trk[i];
        cnt = freq - cnt; int j = 0;
        while(cnt > 0) {
            if(!vis[j]) {
                vis[j] = true;
                s[j] = c; cnt--;
            }
            j++;
        }
    }
}

void solve() {
    int n; cin >> n; int op = n;
    string s; cin >> s; int freq = 0;
    for(int i = 0; i < 26; i++) trk[i] = {0, 'a' + i};
    for(auto& it : s) trk[it-'a'].first++;
    sort(trk.rbegin(), trk.rend());
    for(int i = 1; i * i <= n; i++) {
        if(n % i) continue ;
        if(i * 26 >= n) {
            int val = check(i, n);
            if(val < op) freq = i, op = val;
        }
        if(n / i * 26 >= n) {
            int val = check(n / i, n);
            if(val < op) freq = n / i, op = val;
        }
    }
    fill(s, freq, n);
    cout << op << endl << s << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}