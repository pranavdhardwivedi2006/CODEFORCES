#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> a(n);
	    for(int i = 0; i < n; i++) cin >> a[i]; 
	    int i = 0;
	    while(i + 1 < n) {
	        if(a[i] > a[i+1]) i++;
	        else break;
	    }
	    int start = i + 1;
	    while(i + 1 < n) {
	        if(a[i] < a[i+1]) i++;
	        else break;
	    }
	    int mid = i + 1;
	    int last = i + 2;
	    if(last > n) std::cout << "NO" << std::endl;
	    else cout << "YES" << endl << start << " " << mid << " " << last << endl;
	}

}
