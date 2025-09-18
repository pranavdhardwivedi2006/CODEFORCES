#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        int n,z=0,max=0;
        cin >> n;
        for(int i=0;i<n;i++){
            int k;
            cin >> k;
            if(k == 0) z++;
            else {
                z=0;
            }
            max = std::max(z,max);
        }
        cout << max << endl;
    }
}