#include <bits/stdc++.h>
using namespace std;

struct SegmentTree {
    int n; vector<int> tree;

    SegmentTree(int size) {
        n = size;
        tree.assign(4 * n, 0);
    }

    void build(vector<int> &arr, int node, int start, int end) {
        if (start == end) tree[node] = arr[start];
        else {
            int mid = (start + end) / 2;
            build(arr, 2 * node, start, mid);
            build(arr, 2 * node + 1, mid + 1, end);
            tree[node] = tree[2 * node] & tree[2 * node + 1];
        }
    }
    
    int query(int node, int start, int end, int l, int r) {
        if (r < start || end < l) return (1LL << 31) - 1; 
        if (l <= start && end <= r) return tree[node];
        int mid = (start + end) / 2;
        int left = query(2 * node, start, mid, l, r);
        int right = query(2 * node + 1, mid + 1, end, l, r);
        return left & right;
    }
};

void solve() {
    int n; cin >> n;
    vector<int> a(n); for(int &x : a) cin >> x;
    SegmentTree seg(n); seg.build(a, 1, 0, n - 1);
    int q; cin >> q;
    while (q--) {
        int st, k; cin >> st >> k;
        int l = --st, r = n - 1;
        while(l <= r) {
            int mid = (l + r + 1) / 2;
            if(seg.query(1, 0, n - 1, st, mid) >= k) l = mid + 1;
            else r = mid - 1;
        }
        if(r < st) cout << -1 << " ";
        else cout << r + 1 << " ";
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}