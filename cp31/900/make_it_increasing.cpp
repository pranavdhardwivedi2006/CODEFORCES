#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, cnt = 0;
	    cin >> n;
	    std::vector<int> arr(n);
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    for(int i = n - 1; i > 0; i--) {
	        if(arr[i] == 0) {
	            cnt = -1;
	            break;
	        }
	        while(arr[i-1] >= arr[i]) {
	            cnt++;
	            arr[i-1] /= 2;
	        }
	    }
	    std::cout << cnt << std::endl;
	}

}
