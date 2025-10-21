#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> arr(n);
	for(auto& it : arr) cin >> it;
	sort(arr.begin(), arr.end());
	long long sum = 0;
	for(int i = 0; i < n - 1; i++) sum += arr[i];
    if((sum + arr[n - 1]) % 2 == 1 || sum < arr[n-1]) cout << "NO" << endl;
    else cout << "YES" << endl;
}