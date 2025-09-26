#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n-1);
    for(int i = 0; i < n - 1; i++) cin >> a[i];
    string s;
    cin >> s;
    vector<int> adj(n + 1, 0);
    vector<int> indeg(n + 1, 0);
    for(int i = 0; i < n - 1; i++) {
        adj[i+2] = a[i];
        indeg[a[i]]++;
    }
    queue<pair<int, pair<int, int>>> q;
    for(int i = 1; i <= n; i++) if(!indeg[i]) q.push({i, {0, 0}});
    vector<pair<int, int>> ans(n + 1, {0, 0});
    while(!q.empty()) {
        int nod = q.front().first;
        int node = adj[nod];
        int black = q.front().second.first;
        int white = q.front().second.second;
        q.pop();
        if(s[nod-1] == 'B') black++;
        else white++;
        ans[node].first += black;
        ans[node].second += white;
        indeg[node]--;
        if(indeg[node] == 0) q.push({node, ans[node]});
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(s[i-1] == 'B') ans[i].first++;
        else ans[i].second++;
        if(ans[i].first == ans[i].second) cnt++;
    }
    cout << cnt << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();

}
