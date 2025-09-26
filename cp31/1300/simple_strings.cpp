#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size();
    for(int i = 1; i < n - 1; i++) {
        if(s[i] == s[i-1]) {
            if('a' != s[i-1] && 'a' != s[i+1]) s[i] = 'a';
            if('b' != s[i-1] && 'b' != s[i+1]) s[i] = 'b';
            if('c' != s[i-1] && 'c' != s[i+1]) s[i] = 'c';
        }
    }
	if(n > 1 && s[n-2] == s[n-1]) {
	    if(s[n-1] == 'a') s[n-1] = 'b';
	    else s[n-1] = 'a';
	}
    cout << s << endl;
}
