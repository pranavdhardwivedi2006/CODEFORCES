#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int t = INT_MAX, flag = 0;
        for(int i=1;i<n;i++){
            if(arr[i] >= arr[i-1]){
                t = min(t, arr[i] - arr[i-1]);
            }
            else{
                flag = 1;
                break;
            }
        }
        if(flag == 0) cout << t/2 + 1 << endl;
        else cout << 0 << endl;
    }
}