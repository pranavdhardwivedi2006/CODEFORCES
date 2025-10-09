#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    vector<int> dp(n, 0);
    dp[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        int k = i + a[i] + 1;
        if (k > n)
            dp[i] = dp[i + 1] + 1;
        if (k < n)
            dp[i] = min(dp[i + 1] + 1, dp[k]);
    }
    cout << dp[0] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
