#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    std::vector<int> arr(n);
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    int cnt = 0;
	    for(int i = 0; i < n; i++){
	        if(arr[i] != 0) {
	            cnt++;
	            while(i < n && arr[i] != 0) i++;
	        }
	    }
	    if(cnt > 1) cnt = 2;
	    std::cout << cnt << std::endl;
	}

}
