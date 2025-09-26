#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,q;
	cin >> n >> q;
	vector<int> nums(n), quer(q);
	for(int i = 0; i < n; i++) cin >> nums[i];
	for(int i = 0; i < q; i++) cin >> quer[i];
	for(int i = 0; i < q; i++) {
	    int k = quer[i];
	    for(int j = 0; j < n; j++) {
	        if(nums[j] == quer[i]) {
	            cout << j + 1 << " ";
	            nums[j] = k;
	            break;
	        }
	        swap(nums[j], k);
 	    }
	}

}
