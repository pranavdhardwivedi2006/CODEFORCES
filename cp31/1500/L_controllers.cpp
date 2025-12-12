#include <bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define mod 1000000007


int main() {
	int n; cin >> n;
	int c1 = 0, c2 = 0;
	for(int i = 0; i < n; i++) {
	    char c; cin >> c;
	    if(c == '+') c1++;
	    else c2++;
	} 
	if(c1 < c2) swap(c1, c2);
	int q; cin >> q;
	while(q--) {
	    long long a, b; cin >> a >> b;
	    if(c1 == c2) {yes continue;}
	    if(a == b) {no continue;}
	    if(a < b) swap(a, b);
	    int x1 = lcm(a, b) / b;
	    int x2 = lcm(a, b) / a;
	    if((c1 - c2) % (x1 - x2) == 0) {
    	    long long k = (c1 - c2) / (x1 - x2);
	        if((x1 + x2) * k <= n) yes
	        else no
	    }
	    else no
	}

}
