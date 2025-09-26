#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(d-b < c-a) cout << -1 << endl;
        else cout << 2*(d - b) - c + a << endl; 
    }
} 