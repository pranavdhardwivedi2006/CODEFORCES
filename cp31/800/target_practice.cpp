#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int sum=0;
        vector<vector<char>> a(10,vector<char>(10));
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin >> a[i][j];
            }
        }
        int s = 1;
        vector<vector<int>> main(10,vector<int>(10,0));
        for(int i=0;i<5;i++){
            int p=i,q=10-i-1;
            for(int k=p;k<=q;k++){
                main[p][k] = s;
            }
            for(int k=p;k<=q;k++){
                main[k][q] = s;
            }
            for(int k=q;k>=p;k--){
                main[q][k] = s;
            }
            for(int k=q;k>=p;k--){
                main[k][p] = s;
            }
            s++;
        }
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(a[i][j]=='x') sum += main[i][j];
            }
        }
        cout << sum << endl;
    }
} 