#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;
	vector<pair<int, int>> trk(26);
	for(int i = 0; i < n; i++) {
	    for(int j = 25; j > s[i]-'a'; j--) {
	        if(trk[j].first) {
	            cout << "YES" << endl;
	            cout << trk[j].second + 1 << " " << i + 1 << endl;
	            return 0;
	        }
	    }
	    trk[s[i]-'a'] = {1, i};
	}
	cout << "NO" << endl;

}

