#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
        long long n, i;
        cin >> n;
        for(i = 1; i <= n; i++){
            if(n % i) break;
        }
        cout << --i << endl;
	}
}