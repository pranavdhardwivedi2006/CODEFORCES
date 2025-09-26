#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,p=0;
	    cin >> n;
	    for(int i=0;i<n;i++){
	        int t;
	        cin >> t;
	        if(t==1) p++;
	    }
	    if(p>=n-p) {
	        if((n-p)%2 == 0) std::cout << 0 << std::endl;
	        else cout << 1 << endl;
	    }
	    else {
	        int k = n/2 - p;
	        if(n%2) k++;
	        if((n-p-k)%2) k++;
	        cout << k << endl;
	    }
	}
    return 0;
}
