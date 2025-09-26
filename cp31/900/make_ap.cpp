#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,flag=0;
	    cin >> a >> b >> c;
	    int k = 2 * b - c;
	    if(k > 0 && !(k % a)) flag = 1;
	    k = 2 * b - a;
	    if(k > 0 && !(k % c)) flag = 1;
	    if(!((a+c) & 1)) {
	        k = (a+c) >> 1;
	        if(k > 0 && !(k % b)) flag = 1;
	    }
	    if(flag) std::cout << "Yes" << std::endl;
	    else cout << "No" << endl;
	    
	}

}