#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long x,n;
	    cin >> x >> n;
	    if(x & 1) {
	        if(n % 4 == 1) x += n;
            else if(n % 4 == 2) x--;
            else if(n % 4 == 3) x -= n + 1;
	    }
	    else {
            if(n % 4 == 1) x -= n;
            else if(n % 4 == 2) x += 1;
            else if(n % 4 == 3) x += n + 1;
	    }
	    std::cout << x << std::endl;
	}

}