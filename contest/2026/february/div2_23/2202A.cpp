#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define ll long long

void solve() {
    int x, y; cin >> x >> y;
    if(y > 0) {
        int temp = 2 * y;
        if(temp > x) no
        else if(x == temp) yes
        else if((x - temp) % 3 == 0) yes
        else no
    }
    else if(y == 0) {
        if(x % 3 == 0) yes
        else no
    }
    else {
        int temp = 4 * abs(y);
        if(temp > x) no
        else if(x == temp) yes
        else if((x - temp) % 3 == 0) yes
        else no
    }
}

int main() {
	int t; cin >> t;
	while(t--) solve();

}