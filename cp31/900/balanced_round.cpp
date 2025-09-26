#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    vector<int> arr(n);
	    for(int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    sort(arr.begin(), arr.end());
	    int min = n - 1;
	    for(int i = 0; i < n; i++) {
	        int cnt = 0;
	        while(i < n - 1 && arr[i+1] - arr[i] <= k) {
	            cnt++;
	            i++;
	        }
	        min = std::min(n - cnt - 1, min);
	    }
	    cout << min << endl;
	}

}

