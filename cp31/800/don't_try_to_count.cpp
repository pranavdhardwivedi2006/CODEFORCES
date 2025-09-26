#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n,m;
	    cin >> n >> m;
	    string s,x;
	    cin >> x >> s;
	    int op = 0, flag = 0; 
	    for(int i = 0; i < 6; i++) {
	        if(x.find(s) != string::npos) {
	            flag = 1;
	            break;
	        }
	        op++;
	        x += x;
	    }
	    if(!flag) op = -1;
	    std::cout << op << std::endl;
 	}

}
