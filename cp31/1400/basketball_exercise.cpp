#include <bits/stdc++.h>
using namespace std;
vector<vector<long long>> dp;

long long rec(int index, int k, vector<int>& a, vector<int>& b) {
    if(index == a.size() - 1) return k == 0 ? a[index] : b[index];
    if(dp[index][k] != -1) return dp[index][k];
    long long leave = rec(index + 1, k, a, b);
    long long take = (k == 0 ? a[index] : b[index]) + rec(index + 1, (k + 1) % 2, a, b);
    return dp[index][k] = max(take, leave);
}

int main() {
	int n; cin >> n;
	vector<int> a(n), b(n); 
	dp.resize(n, vector<long long>(2, -1));
	for(auto& it : a) cin >> it;
	for(auto& it : b) cin >> it;
	cout << max(rec(0, 0, a, b), rec(0, 1, a, b)) << endl;

}
