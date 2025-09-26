#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
	    string s,t;
	    cin >> s >> t;
	    int ss = s.size(), ts = t.size();
	    int j = ss - 1, flag = 0;
	    for(int i = ts - 1; i >= 0; i--) {
	        for(int k = j + 1; k < ss; k++) {
	            if(t[i] == s[k]) {
	                flag = 1;
	                break;
	            }
	        }
	        if(flag) break;
	        while(j >= 0) {
	            if(t[i] == s[j]) {
    	            s[j] = '0';
    	            break; 
    	        }
    	        j--;
	        }
	        if(j == -1) flag = 1;
	        if(flag) break;
	    }
	    if(!flag) std::cout << "Yes" << std::endl;
	    else cout << "No" << endl;
	}

}
