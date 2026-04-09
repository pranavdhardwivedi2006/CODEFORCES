#include <bits/stdc++.h>
using namespace std;
#define ll long long
string s;

ll find(set<char>& st, string& s1, string& s2) {
    int n = s1.size(), l = 0, r = 0;
    for(int i = 0; i < n; i++) {
        if(st.count(s1[i])) s[i] = s2[i];
        else s[i] = s1[i];
    }
    ll ans = 0;
    while(r < n) {
        while(r < n && s[r] == s2[r]) ans += r++ - l + 1;
        l = ++r;
    }
    return ans;
}

void solve() {
    int n, k; cin >> n >> k; s.assign(n, ' ');
    string s1, s2; cin >> s1 >> s2;
    set<char> st(s1.begin(), s1.end());
    vector<char> trk(st.begin(), st.end());
    int size = 1 << st.size(); ll maxi = 0;
    k = min(k, (int)st.size());
    for(int i = 0; i < size; i++) {
        set<char> c; int j = 0, copy = i;
        if(__builtin_popcount(i) == k) {
            while(copy) {
                if(copy & 1) c.insert(trk[j]);
                j++; copy >>= 1;
            }
            maxi = max(maxi, find(c, s1, s2));
        }
    }
    cout << maxi << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}