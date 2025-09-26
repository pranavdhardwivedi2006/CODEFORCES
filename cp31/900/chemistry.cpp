#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
        int n,k;
        string s;
        cin >> n >> k >> s;
        vector<int> trk(26, 0);
        for(auto it : s) trk[it-'a']++;
        int odd=0;
        for(auto it : trk){
            if(it & 1){ 
                if(k > 0) k--;
                else odd++;
            }
        } 
        if(odd > 1) cout << "no" << endl;
        else cout << "yes" << endl;
	}
}