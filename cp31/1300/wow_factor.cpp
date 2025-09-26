#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size();
    long long curr = 0, ans = 0;
    vector<int> trk(n, 0);
    int i = 0;
    while(i < n) {
        int cnt = 0;
        if(s[i] == 'v') {
            while(i < n && s[i] == 'v') cnt++, i++;
            curr += cnt - 1;
        }
        while(i < n && s[i] == 'o') trk[i++] = curr;
    }
    i = n - 1, curr = 0;
    while(i >= 0) {
        if(s[i] == 'v') {
            int cnt = 0;
            while(i >= 0 && s[i] == 'v') cnt++, i--;
            curr += cnt - 1;
        }
        while(i >= 0 && s[i] == 'o') {
            ans += curr * trk[i];
            i--;
        }
    }
    cout << ans << endl;
}
