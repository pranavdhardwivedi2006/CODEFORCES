#include <bits/stdc++.h>
using namespace std;
vector<array<int, 3>> prefix;

int first(int x, int rem) {
    while(x % 3 != rem) x++;
    return x;
}

int last(int x, int rem) {
    while(x % 3 != rem) x--;
    return x;
}

array<int, 3> find(int l, int r, int rem) {
    int st = first(l, rem);
    int end = last(r, rem);
    st = max(st - 3, 0);
    array<int, 3> temp;
    temp[0] = prefix[end][0] - prefix[st][0];
    temp[1] = prefix[end][1] - prefix[st][1];
    temp[2] = prefix[end][2] - prefix[st][2];
    return temp;
}

int findMin(int l, int r) {
    auto a = find(l, r, 0);
    auto b = find(l, r, 1);
    auto c = find(l, r, 2);
    int maxi = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == j) continue;
            for(int k = 0; k < 3; k++) {
                if(k == j || k == i) continue;
                maxi = max(maxi, a[i] + b[j] + c[k]);
            }
        }
    }
    return r - l + 1 - maxi;
}

void solve() {
    int n, q; cin >> n >> q;
    string s(n + 1, ' ');
    for(int i = 1; i <= n; i++) cin >> s[i];
    prefix.resize(n + 1, {0, 0, 0});
    for(int i = 1; i <= n; i++) {
        int prev = max(0, i - 3);
        prefix[i][0] += prefix[prev][0];
        prefix[i][1] += prefix[prev][1];
        prefix[i][2] += prefix[prev][2];
        prefix[i][s[i]-'a']++;
    }
    while(q--) {
        int l, r; cin >> l >> r;
        if(r - l == 1) cout << (s[l] == s[r]) << endl;
        else if(r - l == 0) cout << 0 << endl;
        else cout << findMin(l, r) << endl;
    }
}

int main() {
    solve();

}