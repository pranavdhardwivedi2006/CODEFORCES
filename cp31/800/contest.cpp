#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    int y = 1;
	    while(y < x){
	        int t = x ^ y;
            if (t > 0 && (x + y > t) && (x + t > y) && (y + t > x)) break;
            y++;
	    }
	    if(y==x) std::cout << -1 << std::endl;
        else cout << y << endl;
	}

}
