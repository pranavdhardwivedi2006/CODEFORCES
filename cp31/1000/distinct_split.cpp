#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<bool> trk(26, 0);
	    vector<int> back(n, 0);
	    int cnt = 0;
	    for(int i = n - 1; i >= 0; i--) {
	        back[i] = cnt;
	        if(!trk[s[i]-'a']) {
	            trk[s[i]-'a'] = 1;
	            cnt++;
	        }
	    }
	    fill(trk.begin(), trk.end(), 0);
        cnt = 0;
        int max = 0;
        for(int i = 0; i < n; i++) {
            if(!trk[s[i]-'a']) {
	            trk[s[i]-'a'] = 1;
	            cnt++;
	        }
	        max = std::max(max, back[i] + cnt);
        }
        cout << max << endl;
    }
    
}
