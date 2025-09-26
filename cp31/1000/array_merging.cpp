#include <bits/stdc++.h>
using namespace std;

void input(int n, vector<int>& a) {
    int p = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if(p != k) cnt = 0;
        p = k;
        cnt++;
        a[p] = max(a[p], cnt);
    }
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> a(2 * n + 1, 0), b(2 * n + 1, 0);
	    input(n, a);
	    input(n, b);
	    int max = 0;
	    for(int i = 0; i <= 2 * n; i++) max = std::max(max, a[i] + b[i]);
	    cout << max << endl;
	}

}
