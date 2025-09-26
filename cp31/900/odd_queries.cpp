#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,q;
	    cin >> n >> q;
	    std::vector<int> arr(n);
	    cin >> arr[0];
	    for(int i = 1; i < n; i++){
	        int k;
	        cin >> k;
	        arr[i] = arr[i-1] +  k;
	    }
	    for(int i = 0; i < q; i++){
	        int l,r,k;
	        cin >> l >> r >> k;
	        int sum = (r - l + 1) * k;
	        if(l != 1) sum += arr[l-2];
	        if(r != n)sum += arr[n-1] - arr[r-1];
	        if(sum & 1) cout << "YES" << endl;
	        else cout << "NO" << endl;
	    }
	}
	
}