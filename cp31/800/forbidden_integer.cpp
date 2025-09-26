#include<bits/stdc++.h>
using namespace std;

void arr2(int n, int k){
    if(n%2==0) {
        cout << "YES" << endl << n/2 << endl;
        n/=2;
    }
    else {
        if(k%2==0) k--;
        n -= k;
        cout << "YES" << endl << n/2+1 << endl << k << " ";
        n/=2;
    }
    for(int i=0;i<n;i++) cout << 2 << " ";
    cout << endl;
}

void arr1(int n){
    cout << "YES" << endl << n << endl;
    for(int i=0;i<n;i++) cout << 1 << " ";
    cout << endl;
}

int main (){
    int t;
    cin >> t;
    while(t--){
        int n,k,x;
        cin >> n >> k >> x;
        if(x == 1 ){
            if(k==1) cout << "NO" << endl;
            else if(k==2){
                if(n%2 == 0) arr2(n, k);
                else cout << "NO" << endl;
            } 
            else arr2(n,k); 
        }
        else arr1(n);
    }
}