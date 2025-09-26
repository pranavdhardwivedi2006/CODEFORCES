#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b;
        vector<int> c;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int t = *max_element(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(t > a[i]){
                b.push_back(a[i]);
            } 
            else {
                c.push_back(a[i]);
            }
        } 
        if(b.size()){
            cout << b.size() << " " << c.size() << endl;
            for(int i=0;i<b.size();i++) std::cout << b[i] << " ";
            cout << endl;
            for(int i=0;i<c.size();i++) std::cout << c[i] << " ";
            cout << endl;
        }
        else cout << -1 << endl;
    }
} 