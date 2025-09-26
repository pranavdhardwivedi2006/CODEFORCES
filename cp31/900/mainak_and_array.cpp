#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    int ans = arr[n-1] - arr[0];
	    if(n > 1){
	        int start = *max_element(arr.begin() + 1, arr.end());
	        int end = *min_element(arr.begin(), arr.end() - 1);
    	    ans = max(ans, start - arr[0]);
    	    ans = max(ans, arr[n-1] - end);
	    }
	    for(int i = 0; i < n - 1; i++){
	        ans = max(ans, arr[i] - arr[i+1]);
	    }
	    cout << ans << endl;
	}

}