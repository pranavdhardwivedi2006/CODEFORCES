#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int max = 0, cnt = 0;
	    for(int i = 0; i < n;){
	       if(s[i] == '<') while(i < n && s[i] == '<') cnt++,i++;
	       else while(i < n && s[i] == '>') cnt++,i++;
	       max = std::max(max, cnt);
	       cnt = 0;
	    }
	    std::cout << max + 1 << std::endl;
	}

}
