#include <bits/stdc++.h>
using namespace std;

long long rec(vector<pair<int, int>> &arr, int index, vector<long long> &dp)
{
    int n = arr.size();
    if (index >= n)
        return 0;
    if (index == n - 1)
        return 1LL * arr[n - 1].first * arr[n - 1].second;
    if (dp[index] != -1)
        return dp[index];
    long long leave = rec(arr, index + 1, dp);
    long long take = 1LL * arr[index].first * arr[index].second;
    if (arr[index + 1].first - 1 == arr[index].first)
        take += rec(arr, index + 2, dp);
    else
        take += leave;
    return dp[index] = std::max(take, leave);
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    sort(a.begin(), a.end());
    vector<pair<int, int>> arr;
    arr.push_back({a[0], 1});
    for (int i = 1; i < n; i++)
    {
        int m = arr.size() - 1;
        auto it = arr[m];
        int u = it.first, v = it.second;
        if (u != a[i])
            arr.push_back({a[i], 1});
        else
            arr[m] = {u, v + 1};
    }
    int m = arr.size();
    vector<long long> dp(m, -1);
    cout << rec(arr, 0, dp) << endl;
}