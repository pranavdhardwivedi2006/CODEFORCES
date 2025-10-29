#include <bits/stdc++.h>
using namespace std;
long long ans = 0;

void merge(vector<int> &a, int left, int mid, int right)
{
    int l = left, r = mid + 1;
    vector<int> temp;
    while (l <= mid && r <= right)
    {
        if (a[l] <= a[r])
            temp.push_back(a[l++]);
        else
            temp.push_back(a[r++]), ans += mid - l + 1;
    }
    while (l <= mid)
        temp.push_back(a[l++]);
    while (r <= right)
        temp.push_back(a[r++]);
    for (int i = left; i <= right; i++)
        a[i] = temp[i - left];
}

void merge_sort(vector<int> &a, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        merge_sort(a, left, mid);
        merge_sort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

void solve()
{
    ans = 0;
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        arr[i] = {u, v};
    }
    sort(arr.begin(), arr.end());
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        b[i] = arr[i].second;
    merge_sort(b, 0, n - 1);
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
