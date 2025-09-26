#include <bits/stdc++.h>
using namespace std;

int find(int k, vector<int>& a) {
    int l = 0, r = a.size() - 1;
    while(l <= r) {
        int mid = (l + r) >> 1;
        if(a[mid] == k) return mid;
        if(a[mid] < k) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> a(n), b(n);
	    unordered_map<int, vector<int>> mpp;
	    map<int, int> idx;
	    for(int i = 0; i < n; i++) {
	        cin >> a[i];
	        b[i] = a[i];
	        mpp[a[i]].push_back(i); 
	    }
	    sort(a.begin(), a.end());
	    int l = 0, r = 1;
	    long long sum = a[0];
	    while(1) {
	        while(r < n && a[r] <= sum) sum += a[r++];
	        while(l < r) idx[l++] = r - 1;
	        if(r < n) sum += a[r++];
	        else break;
	    }
	    vector<int> ans(n, 0);
	    for(auto it : a) {
	        int mid = find(it, a);
	        for(auto& i : mpp[it]) {
	            if(i == -1) break;
	            ans[i] = idx[mid];
	            i = -1;
	        }
	    }
	    for(auto it : ans) cout << it << " ";
	    cout << endl;
	}

}
