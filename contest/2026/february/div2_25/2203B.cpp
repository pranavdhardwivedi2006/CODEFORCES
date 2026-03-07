#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    ll n; cin >> n;
    int ans1 = 0, ans2 = 1;
    string s = to_string(n);
    sort(s.begin() + 1, s.end());
    int curr = 0, curr2 = 1;
    int i = 0, j = 1;
    while(i < s.size()) {
        if(curr + s[i] - '0' > 9) break;
        curr += s[i++] - '0';
    }
    while(j < s.size()) {
        if(curr2 + s[j] - '0' > 9) break;
        curr2 += s[j++] - '0';
    }
    cout << min(s.size() - j + 1, s.size() - i) << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}