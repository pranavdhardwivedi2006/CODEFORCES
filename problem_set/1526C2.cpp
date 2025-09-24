#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	priority_queue<int, vector<int>, greater<int>> pq;
	long long curr = 0; 
	int ans = 0;
	for(int i = 0; i < n; i++) {
	    if(curr + a[i] >= 0) {
	        curr += a[i];
	        if(a[i] < 0) pq.push(a[i]);
	        ans++;
	    }
	    else if(!pq.empty() && pq.top() < a[i]) {
	        curr -= pq.top(); pq.pop(); 
	        curr += a[i]; pq.push(a[i]);
	    }
	}
	cout << ans << endl;
}
