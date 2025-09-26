#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,flag=1;
	    cin >> n;
	    vector<int> a(n);
	    for(int i=0; i < n; i++) cin >> a[i];
	    for(int i=1; i < n; i++) {
	        if(a[i] != a[i-1]) {
	            flag = 0;
	            break;
	        }
	    }
	    if(flag) std::cout << "NO" << std::endl;
	    else {
	        sort(a.begin(), a.end());
	        int l = 0, r = n - 1;
	        cout << "YES" << endl;
	        while(l <= r){
	            if(l == r) cout << a[l] << " ";
	            else cout << a[l] << " " << a[r] << " ";
	            l++;
	            r--;
	        }
	        cout << endl;
	    }
	}

}
