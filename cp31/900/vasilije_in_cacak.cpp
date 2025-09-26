#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n, k, x;
        cin >> n >> k >> x;
        long long pre = (n - k) * (n - k + 1) / 2;
        long long post = n * (n + 1) / 2 - pre;
        long long first_k = k * (k + 1) / 2;
        if(x < first_k || x > post) cout << "no";
        else cout << "yes";
        cout << endl; 
    }
}