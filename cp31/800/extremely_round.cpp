#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt = 0, ans;
        int p = n;
        while(p){
            p /= 10;
            cnt++;
        }
        cnt--;
        ans = cnt*9;
        ans += n / pow(10, cnt);
        cout << ans << endl;
    }
} 