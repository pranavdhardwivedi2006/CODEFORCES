#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;
set<int> a, b;

void seperate(bool flag, int n) {
    vis[n] = true;
    for(auto it : adj[n]) {
        if(flag) a.insert(it);
        else b.insert(it);
        if(!vis[it]) seperate(!flag, it);
    }
}

int main() {
	int n;
    cin >> n;
    adj.resize(n);
    vis.resize(n, false);
    for(int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        x--,y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 0; i < n; i++) {
        if(!vis[i]) {
            a.insert(i);
            seperate(false, i);
        }
    }
    long long ans = 1LL * a.size() * b.size() - n + 1;
    cout << ans << endl;
}
