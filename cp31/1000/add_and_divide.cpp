#include <bits/stdc++.h>
using namespace std;

int find(int a, int b) {
    int cnt = 0;
    while(a) {
        a /= b;
        cnt++;
    }
    return cnt;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int a,b;
	    cin >> a >> b;
	    int p = b;
	    if(b == 1) b++;
	    int n = find(a, b);
	    vector<int> trk;
	    for(int i = 0; i <= n; i++) {
	        int k = find(a, b + i);
	        trk.push_back(k + i);
	    }
	    int ans = *min_element(trk.begin(), trk.end());
	    if(p == 1) ans++;
	    cout << ans << endl;
	}

}
