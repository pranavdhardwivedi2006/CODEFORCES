#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int d;
	    cin >> d;
	    int n = 10 * d;
	    vector<bool> trk(n + 1, 1);
	    for (int i = 2; i * i <= n; i++) {
            if (trk[i] == true) {
                for (long long j = 1LL * i * i; j <= n; j += i) trk[j] = false;
            }
        }
        int i = 1 + d, first, second;
        while(!trk[i]) i++;
        first = i;
        i += d;
        while(!trk[i]) i++;
        second = i;
        cout << 1LL * first * second << endl;
    }

}
