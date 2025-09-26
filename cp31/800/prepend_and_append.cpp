#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x=0;
        cin >> n;
        string s;
        cin >> s;
        int l=0, r=s.size()-1;
        while(l<r){
            if(s[l] != s[r]) {
                l++;
                r--;
            }
            else break;
        }
        cout << r-l+1 << endl;
    }
} 