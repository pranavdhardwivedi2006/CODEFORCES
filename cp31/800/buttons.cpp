#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int n = c/2;
        a = a + c - n;
        b += n;
        if(a > b) cout << "First" << endl;
        else cout << "Second" << endl;
    }
} 