#include <bits/stdc++.h>
using namespace std;

bool find(char c, string& s) {
    int i = 0; 
    while(i < s.size()) {
        vector<int>trk(26, 0);
        while(i < s.size() && s[i] != c) {
            if(trk[s[i]-'a'] == 1) return true;
            trk[s[i++]-'a']++;
        }
        i++;
    }
    return false;
}

void solve() {
    string s;
    cin >> s;
    vector<int>trk(26, 0);
    for(int i = 0; i < s.size(); i++) trk[s[i]-'a']++;
    for(int i = 0; i < 26; i++) {
        if(trk[i] && find('a' + i, s)) {
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();

}
