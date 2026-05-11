#include <bits/stdc++.h>
using namespace std;

class SegTree {
    vector<int> tree;
public:
    SegTree(int size) {
        tree.resize(size * 4);
    }
    int build(vector<int>& arr, int node, int l, int r) {
        if(l > r) return 0;
        if(l == r) return tree[node] = arr[l];
        int mid = (l + r) / 2;
        int x = build(arr, node * 2, l, mid);
        int y = build(arr, node * 2 + 1, mid + 1, r);
        return tree[node] = gcd(x, y);
    }
    int query(int node, int l, int r, int ql, int qr) {
        if(r < ql || l > qr) return 0;
        if(ql <= l && qr >= r) return tree[node];
        int mid = (l + r) / 2;
        int q1 = query(node * 2, l, mid, ql, qr);
        int q2 = query(node * 2 + 1, mid + 1, r, ql, qr);
        return gcd(q1, q2);
    }
};

void solve() {
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    vector<int> diff(n - 1);
    for(int i = 0; i < n - 1; i++) {
        diff[i] = abs(a[i] - a[i+1]);
    }
    SegTree segtree(n - 1);
    segtree.build(diff, 1, 0, n - 2);
    while(q--) {
        int l, r; cin >> l >> r;
        if(l == r) cout << 0 << " ";
        else cout << segtree.query(1, 0, n - 2, l - 1, r - 2) << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();

}