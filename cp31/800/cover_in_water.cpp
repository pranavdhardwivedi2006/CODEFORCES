#include<bits/stdc++.h>
using namespace std;

int i=0;

int count(string& s){
    int cnt = 0;
    while(i<s.size() && s[i] == '.'){
        cnt++;
        i++;
    }
    return cnt;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        i=0;
        int n,cnt=0;
        cin >> n;
        string s;
        cin >> s;
        while(i<n){
            if(s[i]=='#'){
                i++;
            }
            else {
                int x = count(s);
                if(x > 2) {
                    cnt = 2;
                    break;
                }
                else cnt += x;
            }
        }
        cout << cnt << endl;
    }
} 









// int n,k,p;
// cin >> n >> k >> p;
// p = abs(p);
// k = abs(k);
// if(-p*n > -k ){
//     cout << -1 << endl;
// }
// else if(p*n < k) cout << -1 << endl;
// else {
//     for(int i=0;i<n;i++){
//         if(p*i >= k) {
//             cout << i << endl;
//             break;
//         }
//     }
// }