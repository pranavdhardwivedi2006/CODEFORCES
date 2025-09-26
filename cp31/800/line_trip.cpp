#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> ans(n);
        for(int i = 0; i<n ;i++){
            cin >> ans[i];
        }
        int min = 0;
        if(ans[0]>=x){
            min = x;
        }
        else {
            min = ans[0];
            int flag = 0;
            for(int i=1;i<n;i++){
                if(ans[i] > x){
                    min = std::max(2*(x-ans[i-1]), min);
                    flag = 1;
                    break;
                }
                else {
                    min = std::max(ans[i]-ans[i-1], min);
                }
            }
            if(flag == 0) min = std::max(2*(x-ans.back()), min);
        }
        cout << min << endl;
    }
}